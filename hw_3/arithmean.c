#include <stdio.h>

int main()
{
	int  num1, num2, num3;
		
	scanf("%d %d %d", &num1, &num2, &num3);

	float mean=(num1+num2+num3)/3.0;

	printf("%.2f", mean);	
	return 0;
}