
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



#define SIZE 256


int main()
{
FILE *f;
	
	char c[SIZE]={'\0'};
	char a;
	
	f=fopen("input.txt", "r");

	//fscanf(f, "%s", c); слово
	int i=0;
	while(!feof(f))
	{
		fgets(&a, sizeof(a),f);
		c[i]=a;
		i++;
	}
	c[i]='\0';
	fclose(f);
	
	f=fopen("output.txt", "w");
	fprintf(f,"%s, %s, %s 3", c, c, c);

	
	fclose(f);

	return 0;
}

