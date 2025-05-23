#include <stdio.h>

void func()
{
	int a;
	scanf("%d", &a);
	
	if((a%2!=0)||(a==1)) printf("%d ", a);
	
	if(a==0) return;
	
	
	
	func();	
	

}

int main(int argc, char **argv)
{
	
	

	func();
	
	return 0;
}
