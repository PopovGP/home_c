#include <stdio.h>

void func(int x, int counter, int totalCounter, int N)
{
	
	if (totalCounter == N) return;
	printf("1: %d %d %d %d\n", x, counter, totalCounter, N);
	
	if(counter == x) { x = x + 1; counter = 0;}
	
	printf("2: %d %d %d %d\n", x, counter, totalCounter, N);
	
	//counter = counter + 1;
	
	func(x, counter, totalCounter+1, N);

}

int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	
	if (a<=0) return 0;
	func(1, 1, 1, a);
	
	return 0;
}
