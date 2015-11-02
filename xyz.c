#include "stdio.h"
int main(int argc, char const *argv[])
{
	char i;
	for(i='a'; i<='z';i++)
		printf("%c=%d\n",i,i );
	printf("hello world\n");
	
	return 0;
}