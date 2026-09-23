#include <stdio.h>

int main()
{
	int  num1, num2, num3, sum;
	
	//printf("Input 3 numbers with space between them: \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	sum=num1+num2+num3;
	printf("\n%d+%d+%d=%d", num1, num2, num3, sum);
	
	return 0;
}