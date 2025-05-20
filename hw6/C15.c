#include <stdio.h>

int grow_up(int x)
{
	int res = 10;
	int ost;
	
	
	
	while(x!=0)
	{
		ost = x % 10;
		x = x / 10;
		
		
		
		if (ost >= res) return 0;
		
		res = ost;

	}
	

	return 1;
	
}
		
		

int main(int argc, char **argv)
{
	int a;
	
	scanf("%d", &a);
	
	if (a<0) return 0;
	
	printf("%s\n", grow_up(a)? "YES": "NO");
	
	return 0;
}
