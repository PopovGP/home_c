#include <stdio.h>

void convert(int x)
{
	if (x/2==0) { printf("%d", x%2); return; }
	convert(x/2);
	printf("%d", x%2);
	
}
	
	

int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	
	if (a<0) return 0;
	
	convert(a);
	
	return 0;
}
