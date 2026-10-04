#include <stdio.h>
#include <locale.h>

#define SIZE 11

int main (void) //поменять местами первую и последнюю цифры
{
	setlocale(LC_ALL, "ru_RU.UTF-8");

	int num;
	char str[SIZE];
	char dig;

	scanf("%d", &num);

	if (num<0)
	{
		printf("\nЧисло должно быть положительным!");
		return 0;
	}
		
	sprintf(str, "%d",  num);
	
	int count=0;
	int temp=num;

	while (temp>0)
	{
		temp/=10;
		count++;
	}
	
	for (int i=0; i<count; i++)
	{
		dig=str[i];
		str[i]=str[count-1];
		str[count-1]=dig;;
		count--;
	}

	printf("%s", str);
	
	return 0;
}
