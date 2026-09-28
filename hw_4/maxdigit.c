#include <stdio.h>

int main ()
{
	int max, a, b, c;  
	char num[3];
		
	scanf("%3s", num);
	
	a = num[0] - '0';
	b = num[1] - '0';
	c = num[2] - '0';

	if (a>=b && a>=c) max = a;
		else if (b>=a && b>=c) max = b;
			else if (c>=a && c>=b) max = c;
	
	printf("%d", max);
			
	return 0;
	
}
