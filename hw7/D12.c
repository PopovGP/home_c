#include <stdio.h>

void func(int x, int counter, int totalCounter, int N)
{
	printf("%d ", x);
	if (totalCounter == N) 
		return;
	
	
	if(counter == x) { x = x + 1; counter = 0;}
	

	
	func(x, counter+1, totalCounter+1, N);

}

int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	
	if (a<=0) return 0;
	func(1, 1, 1, a);
	
	return 0;
}
