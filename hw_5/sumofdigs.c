#include <stdio.h>

#if defined(_WIN32) || defined(_WIN64)
    #include <windows.h>
    #define INITIALIZE_CONSOLE() \
        do { \
            SetConsoleCP(CP_UTF8); \
            SetConsoleOutputCP(CP_UTF8); \
        } while(0);
#else
    // В Linux и macOS по умолчанию используется UTF-8 локаль
    #define INITIALIZE_CONSOLE() do { } while(0)
#endif

int main (void)	//Ввести целое число и найти сумму его цифр
{
	INITIALIZE_CONSOLE();
	
	long int a;
	
	scanf("%ld", &a);
	
	if (a<0) {printf ("Число должно быть положительным или равным нулю!\n"); return 0;}
	
	long int sum=0;
	
	while (a>0)
	{
		sum+=a%10;
		a/=10;
	
	}
	
	printf("%ld\n", sum);

	return 0;
}
