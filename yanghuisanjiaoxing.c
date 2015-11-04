#include "stdio.h"
#define N 10
int main(int argc, char const *argv[])
{
	int i,j,a[N][N];	//数组为10行10列
	for(i=0;i<N;i++){
		a[i][i]=1; 	//使对角线元素的值为1
		a[i][0]=1;	//使地1列元素的值为1
	}
	for(i=2;i<N;i++){	//从第3行开始处理
		for(j=1;j<=i-1;j++){
			a[i][j] = a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<=i;j++){
			printf("%6d",a[i][j] );
			
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}