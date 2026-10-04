#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, стоящие рядом
int main (void)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");

	int a, first, second;

	scanf("%d", &a);

	if (a<0)
	{
		a=abs(a);
	}

	first=a%10;
	a/=10;

	while (a>0)
	{
		second=a%10;
		if (first==second)
		{
			printf("\nYES");
			return 0;
		}
		first=second;
		a/=10;
	}

	if (a==0)
	{
		printf("\nNO");
	}
	

	return 0;
}
