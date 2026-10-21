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

unsigned long long factorial (int);

int main ()
{
    INITIALIZE_CONSOLE();

    int num;
    
    scanf ("%d", &num);

    if (num>20)
    {
        printf ("Число должно быть меньше 20!");
    }
        else if (num<0)
        {
            printf("Число должно быть пположительным!\n");
        }
    
            else printf("%llu\n", factorial(num));

    return 0;
}

unsigned long long factorial (int a)
{
    unsigned long long pre;

    pre=1;

    for (int i=2; i<=a; i++)
    {
        pre*=i;
        
    }

    return pre;
}