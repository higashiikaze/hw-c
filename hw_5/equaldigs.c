#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void) //есть ли в числе две одинаковые цифры, стоящие не рядом
{
	setlocale(LC_ALL, "ru_RU.UTF-8");

	int num, check, rest;

	scanf("%d", &num);

	if (num<0)
	{
		num=abs(num);
	}

	while (num>0)
	{
		rest=num%10;
		check=num/10;

		while (check>0)
		{
			if (rest==check%10)
			{
				printf("\nYES");
				return 0;
			}
			check/=10;
		}

		num/=10;
		
	}
	

	if (num==0)
	{
		printf("\nNO");
	}
	

	return 0;
}
