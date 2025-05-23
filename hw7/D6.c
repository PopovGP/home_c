#include <stdio.h>

void convert(char x)
{
	scanf("%c", &x);
	if (x=='.') { return; }
	convert(x);
	printf("%c", x);
	
}
	
int main(int argc, char **argv)
{
	char a=' ';
	
	
		
	convert(a);
	
	return 0;
}
