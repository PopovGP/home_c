#include <stdio.h>

int tr(int n, int p)
{
	int res=0;
	int position = 1;
	
	int reminder = 0;
	
	while(1)
	{
		reminder = n % p;
		
		n = n / p;
		res = res + position * reminder;
		position = position * 10;
		
		
	
		
		if (n==0) break;
		
	}
		
	return res;
}

int main(int argc, char **argv)
{
	int n,p;
	
	scanf("%d %d", &n,&p);
	
	if(n<0 || p<2 || p>9) return 0;
	
	printf("%d\n", tr(n, p));
	
	return 0;
}
