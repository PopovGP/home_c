#include <stdio.h>

 int is_prime(int n)
{
	if (n == 1 || n == 0) return 0;
	for (int i = n-1; i>2; i--)
	{
		
		if (n%i == 0) return 0;

	}
	

	return 1;
	
}
		
		

int main(int argc, char **argv)
{
	int a;
	
	scanf("%d", &a);
	
	if (a<0) return 0;
	
	printf("%s\n", is_prime(a)? "YES": "NO");
	
	return 0;
}
