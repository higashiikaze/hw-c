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

int is_prime(int n);

int main (void)
{
	INITIALIZE_CONSOLE();
	
	int num, answ;
	
	scanf("%d", &num);
	
	if (num < 0)
	{
		printf("\nЧисло должно быть положительным!");
		return 0;
	}
	
	answ = is_prime(num);
	
	if (answ == 1)
	{
		printf("\nYES");
	}
	else printf("\nNO");
	
	return 0;
}

int is_prime(int n)
{
	int check=0;

	for (int i = 2; i < n; i++)
	{
		if (i!=n && n%i==0)	
		{
			check++;	//заодно количество множителей можно вытащить
			
		}
		
	}
	
	if (n==1 || n==0)	//без этого 1 тоже считается простым
	{
		check++;
	}
	
	
	if (check==0)
	{
		return 1;
	}
	
	else return 0;		
	
}
