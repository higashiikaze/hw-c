#include <stdio.h>

//определить, введены ли числа в порядке возрастания

int main ()
{
	int a, b, c;
			
	scanf("%d %d %d", &a, &b, &c);
	
	if (b>a && c>b)	printf("\nYES"); else printf("\nNO");
			
	return 0;
	
}
