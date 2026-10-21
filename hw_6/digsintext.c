#include <stdio.h>
#include <locale.h>

#define STOP '.'

int digit_to_num(char c);

int main (void) //сумма цифр, введенных в строке
{
	setlocale(LC_ALL, "ru_RU.UTF-8");

	int summa=0;
	char s;
		
	while (s!=STOP)
	{
		s=getchar();
		
		summa+=digit_to_num(s);
		
	}
			
	printf("%d\n", summa);
	
	return 0;
}

int digit_to_num (char c)
{
	int sum=0;
	
	if (c>='0'&&c<='9')
	{
		sum+=c-'0';
		
	}

	return sum;
	
}