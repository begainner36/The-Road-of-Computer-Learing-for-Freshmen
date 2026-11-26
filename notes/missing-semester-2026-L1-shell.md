# Missing Semester 2026 · Lecture 1：Shell 入门

> 课程：MIT *The Missing Semester of Your CS Education*（IAP 2026）
> 讲次：1/12 · Course Overview + Introduction to the Shell
> 官方讲义：<https://missing.csail.mit.edu/2026/course-shell/>
> 本地讲义：`E:\cs-learn\missing-semester-master\_2026\course-shell.md`
> 整理日期：2026-11-26

---

## 0. 这节课在讲什么

这节课不教“命令大全”，而是建立三个基础认知：

1. **程序 = 过滤器**：读 stdin，处理，写 stdout；
2. **shell 是胶水**：用管道、重定向、变量、循环把程序组合起来；
3. **一切皆文件/流**：日志、文件、socket 都能用同一套工具处理。

学完应该能：在文件系统里自由导航、用命令行工具处理文本、写出简单的 bash 脚本。

---

## 1. 导航与查看

| 命令 | 常见用法 | 拓展用法 |
|---|---|---|
| `date` | `date` 显示时间 | `date +%Y-%m-%d`、`date -d "yesterday"`、`date +%s` |
| `echo` | `echo hello` | `echo $PATH`、`echo -n`（不换行）、`echo -e` |
| `man` | `man date` 查手册 | `man 2 open`（系统调用）、`--help` |
| `cd` | `cd /bin`、`cd ~` | `cd -`（回上一个）、`pushd/popd`、`zoxide` 的 `z` |
| `pwd` | 打印当前目录 | `echo $PWD`、`pwd -P` |
| `ls` | `ls /bin` | `-l` 长格式、`-a` 隐藏文件、`-h` 易读、`-t` 按时间、`-R` 递归 |
| `which` | `which echo` | `type`、`command -v` |
| `TAB` | 路径补全 | 连按两次列候选 |

### 核心概念

- **`$PATH`**：`: ` 分隔的目录列表，shell 按顺序查找命令；
- **绝对路径**：`/` 开头；
- **相对路径**：相对当前目录；
- **`. ` 和 `..`**：当前目录 / 父目录；
- **`$PWD`**：当前工作目录。

```console
missing:~$ echo $PATH
/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
missing:~$ which echo
/bin/echo
missing:~$ /bin/echo $PATH
/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
```

---

## 2. 文本处理

### 2.1 查看

| 命令 | 用法 | 拓展 |
|---|---|---|
| `cat file` | 打印文件 | `cat -n`、`cat a b > c` |
| `head file` | 前几行 | `head -n 20`、`head -c 100` |
| `tail file` | 后几行 | `tail -n 20`、`tail -f`（跟踪日志） |
| `sort file` | 按行排序 | `-n` 数值、`-r` 逆序、`-k2` 按列、`-u` 去重 |
| `uniq file` | 去相邻重复 | `-c` 计数、`-d` 只看重复 |

> `uniq` 只处理**相邻**重复，所以通常先 `sort` 再用。

### 2.2 `grep`：找行

```bash
grep "TODO" notes.txt          # 包含 TODO 的行
grep -r "TODO" .               # 递归目录
grep -l "TODO" *.md            # 只列文件名
grep -i -n "todo" file         # 忽略大小写 + 行号
grep -v "DEBUG" app.log        # 反向：排除
grep -c "error" app.log        # 计数
grep -A3 -B3 "panic" log       # 上下文
```

- `pattern` 是**正则表达式**（Code Quality 讲详细）；
- 替代工具：`ripgrep`（`rg`）。

### 2.3 `sed`：替换

```bash
sed -i 's/pattern/replacement/g' file
```

| 部分 | 含义 |
|---|---|
| `-i` | 原地修改文件 |
| `s/` | 替换命令 |
| `/` | 分隔 pattern 与 replacement |
| `/g` | 每行全部替换 |

```bash
sed -n '5,10p' file            # 只打印 5-10 行
sed '/DEBUG/d' file            # 删除含 DEBUG 的行
sed -E 's/(\w+)@(\w+)/\2:\1/'  # 反向引用
sed -i.bak 's/foo/bar/g' f     # 先备份
```

> 注意：`sed -i 's/print/printf/g'` 会把 `printf` 变成 `printff`。只替换调用时用 `s/print(/printf(/g`。

### 2.4 `find`：找文件

```bash
find ~/Downloads -type f -name "*.zip" -mtime +30
find ~ -type f -size +100M -exec ls -lh {} \;
find . -name "*.py" -exec grep -l "TODO" {} \;
```

| 片段 | 含义 |
|---|---|
| `-type f` / `-type d` | 文件 / 目录 |
| `-name "*.zip"` | 名字匹配（引号防 shell 展开） |
| `-mtime +30` | 修改时间超过 30 天 |
| `-size +100M` | 大于 100MB |
| `-exec cmd {} \;` | 对每个结果执行命令，`{}` 为路径 |
| `-exec cmd {} +` | 批量传参，更快 |

```bash
find . -name "*.log" -delete        # 先 -print 预览
find . -type f -empty
find . -newer file.txt
find . -maxdepth 2 -type f
find . -print0 | xargs -0 wc -l     # 处理带空格文件名
```

### 2.5 `awk`：按列处理

```bash
awk '{print $2}' file          # 第 2 列（空白分隔）
awk -F, '{print $2}' file      # 逗号分隔
awk -F, '$2 > 100 {print $1}' data.csv
awk '{sum += $2} END {print sum}' file
awk '{print NR": "$0}' file
```

---

## 3. 组合：shell 的灵魂

### 3.1 管道

```bash
cmd1 | cmd2 | cmd3
```

`|` 把前一个的 **stdout** 变成后一个的 **stdin**。

### 3.2 重定向

| 写法 | 作用 |
|---|---|
| `cmd > file` | stdout 写入（覆盖） |
| `cmd >> file` | 追加 |
| `cmd < file` | 从文件读 stdin |
| `cmd 2> err.log` | stderr 写入 |
| `cmd > out 2>&1` | stdout 和 stderr 都进 out |

### 3.3 其他工具

| 命令 | 作用 | 例子 |
|---|---|---|
| `tee` | 同时写屏幕和文件 | `cmd \| tee log \| grep CRITICAL` |
| `paste -sd,` | 多行拼成一行 | `... \| paste -sd,` |
| `xargs` | 把 stdin 变成命令参数 | `find . -print0 \| xargs -0 wc -l` |
| `seq` | 生成数字序列 | `seq 1 10` |
| `wc -l` | 统计行数 | `cmd \| wc -l` |

### 3.4 旗舰例子：SSH 日志分析

```bash
ssh myserver 'journalctl -u sshd -b-1 | grep "Disconnected from"' \
  | sed -E 's/.*Disconnected from .* user (.*) [^ ]+ port.*/\1/' \
  | sort | uniq -c \
  | sort -nk1,1 | tail -n10 \
  | awk '{print $2}' | paste -sd,
```

| 步骤 | 作用 |
|---|---|
| `ssh myserver '...'` | 远程执行，输出回本地 |
| `journalctl -u sshd -b-1` | 上次启动的 sshd 日志 |
| `grep "Disconnected from"` | 只留断开行 |
| `sed -E '...'` | 正则捕获用户名 |
| `sort` | 相同用户名相邻 |
| `uniq -c` | 统计次数 |
| `sort -nk1,1` | 按次数数值升序 |
| `tail -n10` | 取前 10 |
| `awk '{print $2}'` | 只要用户名 |
| `paste -sd,` | 逗号拼接 |

---

## 4. bash 语言

| 语法 | 用法 | 说明 |
|---|---|---|
| 变量 | `VAR=value`、`$VAR` | 赋值不能有空格 |
| `if` | `if cmd; then ...; fi` | 按退出码判断 |
| `else` | `if ...; then ...; else ...; fi` | |
| `test` / `[` | `[ -f file ]`、`[ "$a" = "b" ]` | `[[ ]]` 更安全 |
| `while` | `while cmd; do ...; done` | 成功就继续 |
| `for` | `for i in a b c; do ...; done` | |
| 命令替换 | `$(cmd)` | `for i in $(seq 1 10)` |
| 算术 | `((RUN++))`、`$((1+2))` | |
| 后台 | `cmd &`、`$!` | `$!` 取 PID |
| shebang | `#!/bin/bash` | 指定解释器 |
| 严格模式 | `set -euo pipefail` | 出错即停 / 未定义变量报错 / 管道失败即失败 |
| glob | `*`、`?`、`{a,b}` | shell 展开 |
| 退出码 | `$?` | 0 = 成功 |
| 逻辑 | `&&`、`\|\|` | 成功才执行 / 失败才执行 |

### 示例：复现 flaky 测试

```bash
#!/bin/bash
set -euo pipefail

stress --cpu 8 &
STRESS_PID=$!

LOGFILE="test_runs_$(date +%s).log"
echo "Logging to $LOGFILE"

RUN=1
while cargo test my_test > "$LOGFILE" 2>&1; do
    echo "Run $RUN passed"
    ((RUN++))
done

kill $STRESS_PID
echo "Test failed on run $RUN"
tail -n 20 "$LOGFILE"
```

---

## 5. 拓展：马上能用的组合

```bash
# 最常用的命令 Top 10
history | awk '{print $2}' | sort | uniq -c | sort -nr | head -10

# 最大的 10 个文件
find ~ -type f -printf '%s %p\n' | sort -nr | head -10

# 各种扩展名的数量
find . -type f | sed 's/.*\.//' | sort | uniq -c | sort -nr

# 批量改扩展名
for f in *.txt; do mv "$f" "${f%.txt}.md"; done

# 实时看错误日志
tail -f app.log | grep --line-buffered "ERROR"

# 安全删旧文件
find /tmp -type f -mtime +7 -print
find /tmp -type f -mtime +7 -delete
```

### 升级版工具

| 原命令 | 替代 | 优点 |
|---|---|---|
| `ls` | `eza` | 颜色、图标、git 状态 |
| `cat` | `bat` | 语法高亮、行号 |
| `grep` | `ripgrep` | 更快、默认递归 |
| `find` | `fd` | 语法友好 |
| `man` | `tldr` | 直接给例子 |
| `cd` | `zoxide` | 按频率跳转 |
| 写脚本 | `shellcheck` | 静态检查 |

---

## 6. 课后练习（精选）

1. `ls -l /` 输出的前 10 个字符是什么意思？
2. 什么是 glob？试 `ls *.txt`、`ls file?.txt`、`ls {a,b,c}.txt`。
3. `'单引号'`、`"双引号"`、`$'ANSI'` 有什么区别？
4. 把 stdout 和 stderr 分别重定向到不同文件，如何都重定向到同一个？
5. `$?`、`&&`、`||` 怎么配合？写一行“目录不存在才创建”。
6. 为什么 `cd` 必须是 shell 内建命令？
7. 写脚本判断文件是否存在（`$1` + `test -f`）。
8. 用管道找出家目录里最常见的 5 种扩展名。
9. 用 `find` + `xargs` 统计所有 `.sh` 文件的行数（处理空格文件名）。
10. 用 `curl` + `grep` 统计课程网站上有几讲。

---

## 7. 我的理解

- shell 的核心不是“记住命令”，而是**知道每个程序吃 stdin、吐 stdout**，然后用 `|` 串起来；
- 大多数“复杂任务”都能拆成：**定位 → 过滤 → 提取 → 统计 → 取前 N → 格式化**；
- 学命令最好的方式不是背，而是**遇到重复劳动时，问自己“能不能用一行命令搞定”**。

> 参考资料
> - 官方讲义：<https://missing.csail.mit.edu/2026/course-shell/>
> - B 站视频：<https://www.bilibili.com/video/BV1CkArz1E4o/>
