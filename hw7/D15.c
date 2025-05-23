#include <stdio.h>

int func(int x)
{
	int a;
	
	
	scanf("%d", &a);
	
	
	
	if(a==0) return x;
	
	x = a > x? a:x;

	
	
	return func(x);	
	

}

int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);

	printf("%d", func(a));
	
	return 0;
}
