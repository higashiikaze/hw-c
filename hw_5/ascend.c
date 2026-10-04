#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void) //все цифры расположены в порядке возрастания
{
	setlocale(LC_ALL, "ru_RU.UTF-8");

	int num, rest;

	scanf("%d", &num);

	if (num<0)
	{
		num=abs(num);
	}
	

	while (num>0)
	{
		rest=num%10;
		num/=10;

		if (rest<=num%10)
		{
			printf("\nNO");
			return 0;
		}
						
	}	

	if (num==0)
	{
		printf("\nYES");				
	}
	
	return 0;
}
