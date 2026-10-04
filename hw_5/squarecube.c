#include <stdio.h>
#include <locale.h>

int main (void)	// квадраты и кубы всех чисел от 1 до введенного числа
{
	
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	
	int a, i;
	
	scanf("%d", &a);
	
	if (a>100) {printf ("Число не должно быть больше 100\n");}
	if (a<0) {printf ("Число должно быть положительным!\n");}
	
	i=1;
	
	while (a<=100 && a>0 && i<=a)
	{
		printf("%6d %6d %8d\n", i, i*i, i*i*i);
		i+=1;
	}

	return 0;
}
