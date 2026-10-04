#include <stdio.h>
#include <locale.h>

#define SIZE 50
#define STOP '.'

int main (void) //перевести все заглавные в строчные
{
	setlocale(LC_ALL, "ru_RU.UTF-8");

	int i, count;
	char s;
	char str[SIZE];

	count=0;

	while (count<SIZE)
	{
		s=getchar();
		
		if (s!=STOP)
		{
			str[count]=s;
			count++;
		}
		
		if (s==STOP)
		{
			break;
		}
		
	}
	
	for (i = 0; i < count; i++)
	{
		if (str[i]>='A' && str[i]<='Z')
		{
			str[i]+=32;
		}
		
	}
	
	printf("%s", str);
	
	return 0;
}
