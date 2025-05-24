#include <stdio.h>

int akkerman(int m, int n)
{

	
	int res = n;
	
	if (m==0) return n + 1;
	
	if (n==0) return akkerman(m-1, 1);
	
	
	res = akkerman(m-1, akkerman(m, n-1));	
	return res;
	

}

int main(int argc, char **argv)
{
	
	int n, m ;
	scanf("%d %d", &m, &n);
	
	printf("%d", akkerman(m, n));
	
	return 0;
}
