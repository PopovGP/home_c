#include <stdio.h>

int func(int x, int N)
{
	
	if ((N%x == 0)&&(x!=N)&&(x!=1)) {

		return 0;
	}
	if ((x==1)&&(N==1)) return 0;
	if (x==1) return 1;
	

	return func(x-1,N);
	
	
}

int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	
	
	printf("%s", func(a,a)?"YES":"NO");
	
	return 0;
}
