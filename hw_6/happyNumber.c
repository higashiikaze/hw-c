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

int is_happy_number(int n);

int main (void)
{
	INITIALIZE_CONSOLE();
	
	int num, answ;
	
	scanf("%d", &num);
	
	if (num < 0 || num == 0)
	{
		printf("\nЧисло должно быть положительным!");
		return 0;
	}
	
	answ = is_happy_number(num);
	
	if (answ == 1)
	{
		printf("\nYES");
	}
	else printf("\nNO");
	
	return 0;
}

int is_happy_number(int n)
{
	int temp, sum = 0, mux = 1;
	
	temp = n;
		
	while (n > 0)
	{
		sum+=temp%10;
		mux*=n%10;
		
		temp/=10;
		n/=10;
	}
	
	if (sum==mux)
	{
		return 1;
	}
	
	else return 0;		
	
}
