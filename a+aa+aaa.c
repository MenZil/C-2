#include "stdio.h"
/*
求Sn = a + aa + aaa + ... + aa...a之值，其中a是个数字，n表示a的位数，n有键盘输入。
*/
int main(int argc, char const *argv[])
{
	int a,n,i=1,sn=0,tn=0;
	printf("a,n=:\n");
	scanf("%d,%d",&a,&n);
	while(i<=n) {
		tn = tn+a;
		sn = sn+tn;
		a=a*10;
		//++i;
		i++;
	}
	
	printf("a+aa+...=%d\n",sn );
	return 0;
}