#include "stdio.h"
/*
求 1!+2!+ ... +20!
*/
int main(int argc, char const *argv[])
{
	double s=0,t=1;
	int n;
	for (n = 1; n <= 20; ++n)
	{
		t = t * n;
		s = s + t;
	}
	printf("%22.15e\n",s );
	return 0;
}