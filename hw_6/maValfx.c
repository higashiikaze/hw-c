#include <stdio.h>
#include <stdlib.h>

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

int fox (int);

int maxval (int);

int main (void)
{
	INITIALIZE_CONSOLE();
	
	int num, res;
	
	while (scanf ("%d", &num) ==1)
	{
		if (num==0)
		{ break;}
				
		res = maxval(fox(num));
	}
	
	printf("\n%d", res);
	
	return 0;
}

int fox (int x)
{
	int y;
	
	if (x < -2)
	{
		y = 4;
	}
	
	else if (x >= 2)
		{
			y = x*x+4*x+5;
		}
		
		else y = x*x;
		
	return y;
}

int maxval (int a)
{
	static int max;
	
	if (max < a)
	{
		max = a;
	}
	
	return max;
}
