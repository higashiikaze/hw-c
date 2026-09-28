#include <stdio.h>

int main ()
{
	int a, b, max, min;
	
	scanf("%d %d", &a, &b);
	
	if (b>a) 
		{max = b; min = a;}
	else  {max = a; min = b;}
	
	printf("%d %d", min, max);
	
	return 0;
	
}
