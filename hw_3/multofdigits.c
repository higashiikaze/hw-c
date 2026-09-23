#include <stdio.h>

int main()
{
	int  num, mult=1;
		
	scanf("%d", &num);

	while (num>0)
	{	
		mult*=num%10;
		num/=10;
	}

	printf("%d", mult);
	
	return 0;
}