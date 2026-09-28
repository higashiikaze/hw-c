#include <stdio.h>

//сравнение чисел

int main ()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	if (a>b) printf("\nAbove");
		else if (b>a) printf("\nLess");
			else if (a==b) printf("\nEqual");
		
	return 0;
	
}
