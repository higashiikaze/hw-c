#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void) //есть ли в числе одна цифра 9
{
	setlocale(LC_ALL, "ru_RU.UTF-8");

	int num, count=0;

	scanf("%d", &num);

	if (num<0)
	{
		num=abs(num);
	}

	while (num>0)
	{
		if (num%10==9)
		{
			count++;
		}
		
		num/=10;
		
	}	

	if (count==1)
	{
		printf("\nYES");				
	}
	else printf("\nNO");
	

	return 0;
}
