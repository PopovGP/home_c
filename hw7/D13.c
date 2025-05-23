#include <stdio.h>

void func(int number, int x, int N)
{
	
	
	
	//if(number==N) return;
	
	if(x%number == 0) 
	{
		printf("%d ", number);
		if(number>=N) return;
		func(2, x/number, N);
	}
	else
	{
	if(number>=N) return;
	func(number+1, x, N);
	
	

}
	return;
	

}

int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);

	func(2, a, a);
	
	return 0;
}
