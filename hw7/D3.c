#include <stdio.h>

void func(int x)
{
	int digit;
	digit = x%10;
	printf("%d ", digit);
	
	if (x/10 == 0) {

		return;
	}
	func(x/10);
	
	
	
}

int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	
	if (a<0) return 0;
	func(a);
	
	return 0;
}
