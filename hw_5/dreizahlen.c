#include <stdio.h>

#if defined(_WIN32) || defined(_WIN64)
    #include <windows.h>
    #define INITIALIZE_CONSOLE() \
        do { \
            SetConsoleCP(CP_UTF8); \
            SetConsoleOutputCP(CP_UTF8); \
        } while(0);
#else
    #define INITIALIZE_CONSOLE() do { } while(0)
#endif

int main (void)	//Ввести целое число и определить, верно ли, что в нём ровно 3 цифры
{
	INITIALIZE_CONSOLE();
	
	int a;
	
	scanf("%d", &a);
	
	if (a<0) {printf ("Число должно быть положительным!\n"); return 0;}
	
	int quon=0;
	
	while (a>0)
	{
		a/=10;
		quon++;
	}
	
	if (quon==3) printf("\nYES\n");
	else printf("\nNO\n");

	return 0;
}
