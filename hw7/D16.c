#include <stdio.h>

int func(int res,  int N)
{
	

	
	if(res>N) return 0;
	if(res==N) return 1;

	
	
	
	return func(res * 2, N);
	

}

int main(int argc, char **argv)
{
	
	int n ;
	scanf("%d", &n);
	
	printf("%s", func(1, n)?"YES":"NO");
	
	return 0;
}
