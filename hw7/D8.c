#include <stdio.h>

void func(int x, int y, char direction)
{

	if (direction)
	{
	
		if (x > y) {

			return;
		}
		
		printf("%d ", x);
		func(x+1, y, direction);
		
	}
	else 
	
	{
		
		if (x < y) {
	
			return;
		}
		
		printf("%d ", x);
		func(x-1, y, direction);
		
		

	}
	
	
	
}

int main(int argc, char **argv)
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	func(a,b, a<=b);
	
	return 0;
}
