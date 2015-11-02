#include "stdio.h"
/*
一个数如果恰好等于它的因子之和，这个数就称“完数”。如6=1+2+3
*/
int main(int argc, char const *argv[])
{
	int m,s,i;
	for(m=2;m<1000;m++)
	{
		s=0;
		for(i=1;i<m;i++)
		{
			if (m%i==0) s=s+i;
			if (s==m)
			printf("%d,its factors are ",m );	
		}
		for (i = 1;i<m; i++)
		{
			if (m%i==0)
			printf("%d",i );
			printf("\n");
		}					
	}
	return 0;
}