#include <stdio.h>

int convert(int x)
{
	int res = 0;
	int digit = x%2;
	if (x/2==0) {  if (digit!=0) res = res + 1; return res; }
	
	res = res + convert(x/2);
	
	if (digit!=0) res = res + 1;
	
	return res;

	
}


int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	
	if (a<0) return 0;
	
	printf("%d",convert(a));
	
	return 0;
}
