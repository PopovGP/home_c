#include <stdio.h>

void func(int x)
{

	
	if (x == 0) {

		return;
	}
	
	printf("%d ", x);
	func(x-1);
	
	
	
}

int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	

	func(a);
	
	return 0;
}
