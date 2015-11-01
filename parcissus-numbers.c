#include "stdio.h"
/*
球所有“水仙花数”.例如：153=1^3+5^3+3^3.
*/
int main(int argc, char const *argv[])
{
	int i,j,k,n;
	printf("parcissus numbers are: \n");
	for(n=100;n<1000;n++){
		i = n/100;
		j = n/10-i*10;
		k = n%10;
		if(n == i*i*i+j*j*j+k*k*k){
			printf("%d,",n );
		}	
	}
	printf("\n");
	return 0;
}