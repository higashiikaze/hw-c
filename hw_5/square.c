#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void)	//сумма квадратов чисел от а до b
{
	
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	int modA = abs(a);
	int modB = abs(b);
	
	if (modA>100 || modB>100) {printf ("Числа не должны быть больше 100 по модулю!\n"); return 0;}
	if (a>b) {printf ("Первое введенное число не должно быть больше второго!\n"); return 0;}
	
	while (a<=b)
	{
		printf("%6d", a*a);
		a+=1;
	}

	return 0;
}
