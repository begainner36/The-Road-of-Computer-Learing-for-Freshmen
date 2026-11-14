///*卒从(0, 0) 走到(n, m)，每步只能向右或向下；
//马在(hx, hy)，马所在的点 + 马能跳到的 8 个点都不能走；
//求路径条数。*/
//#include<stdio.h>
//#define ll long long
//int main()
//{
//	int n, m, x1, x2;
//	scanf("%d %d %d %d",&n,&m,&x1,&x2);
//	int N = n + 2;
//	int M = m + 2;
//	int hx = x1 + 2;
//    int hy = x2 + 2;
//	int block[64][64] = { 0 };
//	static const int gx[9] = { 0,-2,-2,2,2,-1,-1,1,1 };
//	static const int kx[9] = { 0,-1,1,-1,1,-2,2,-2,2 };
//	//block[hx][hy] = 1;
//	for (int i = 0;i <= 8;i++)
//		block[hx + gx[i]][hy + kx[i]] = 1;
//	static int ll f[64][64];
//	for(int i=2;i<=N;i++)
//	{
//		if (!block[2][2])
//		{
//			f[2][2] = 1;
//			for (int i = 2;i <= N;i++)
//			{
//				for (int j = 2;j <= M;j++)
//				{
//					if (i == 2 && j == 2)
//						continue;
//					if (block[i][j])
//						continue;
//					f[i][j] = f[i - 1][j] + f[i][j - 1];
//				}
//
//			}
//
//		}
//	}
//	printf("%lld\n", f[N][M]);
//	return 0;
// 
//
//
//
//
//
//
//
//
//
//
//}