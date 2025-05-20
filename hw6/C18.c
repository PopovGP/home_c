#include <stdio.h>

int func(char x)
{
	if(x>='0' && x<='9') return 1; else return 0;
}
		
		

int main(int argc, char **argv)
{
	char a;
	int res = 0;
	
	while(1)
	{
		scanf("%c", &a);
		if (a=='.') break;
		res = res + func(a);
	}
		
	
	
	printf("%d\n", res);
	
	return 0;
}
