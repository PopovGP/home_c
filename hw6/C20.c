#include <stdio.h>

int func(char x)
{
	if(x=='(') return 1;
	if(x==')') return -1;
	
	return 0;
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
		if (res<0) break;
	}
		
	
	
	printf("%s\n", res==0?"YES":"NO");
	
	return 0;
}
