#include <stdio.h>

int func(int n, int p)
{
	
	int res = n;
	
	
    if(p==0) return 1;
	
	if(p==1) return n;

	
	
	res = res * func(n, p-1);	
	return res;
	

}

int main(int argc, char **argv)
{
	
	int n, p ;
	scanf("%d %d", &n, &p);
	
	printf("%d", func(n, p));
	
	return 0;
}
