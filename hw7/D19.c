#include <stdio.h>

int func()
{
	char a;
	int count = 0;
	
	
	scanf("%c", &a);
	
	
	
	if(a=='.') return 0;
	
	if(a=='a') count = 1;

	
	
	count = count + func();	
	return count;
	

}

int main(int argc, char **argv)
{
	

	printf("%d", func());
	
	return 0;
}
