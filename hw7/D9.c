#include <stdio.h>

int func(int x)
{
	int res=0;

	int digit = x%10;
	
	if (x/10 == 0) {

		return res + digit;
	}
	
	
	
	res = res + func(x/10);;
	
	return res+digit;
	
}

int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	
	printf("%d", func(a));
	
	return 0;
}
