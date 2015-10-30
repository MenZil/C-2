#include "stdio.h"
/*
输入一行字符，分别统计出其中的英文字母·空格·数字和其他字符的个数。
*/
int main(int argc, char const *argv[])
{
	char c;
	int letters=0,space = 0, digit = 0,other= 0;
	printf("please input some string:\n");
	while((c = getchar())!='\n') {

		printf("---\n");
	    if((c >= 'a' && c <= 'z')||(c >= 'A' && c <='Z')) 
	    	letters ++;
	    else if(c ==' ')
	    	space ++;
	    else if(c>='0'&&c<='9')
	    	digit ++;
	    else
	    	other ++;
	}
	printf("letters:%d\n spase:%d\ndigit:%d\nother:%d\n",letters,space,digit,other );
	return 0;
}