#include <stdio.h>

int func(int x)
{
	int res = 0;
	int ost;
	
	
	
	while(x!=0)
	{
		ost = x % 10;
		x = x / 10;
		
		
		
		res = res + ost;
	}
	
	if (res%2==0) return 1; else return 0;
	
}
		
		

int main(int argc, char **argv)
{
	int a;
	
	scanf("%d", &a);
	
	if (a<0) return 0;
	
	printf("%s\n", func(a)? "YES": "NO");
	
	return 0;
}
