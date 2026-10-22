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

int is_prime (int, int);       //простое ли число, рекурсия

int main (void)
{
    INITIALIZE_CONSOLE();

    unsigned int num;

    scanf("%d", &num);

    if (is_prime(num, 2))
    {
        printf("YES\n");
    }
    else printf("NO\n");
    

    return 0;

}

int is_prime (int n, int delitel)
{
    if (n<2)
    {
        return 0;
    }
    else if (delitel*delitel>n)     //если делитель будет больше корня, рекурсия ответ не дает
        {
            return 1;
        }
        else if (n%delitel==0)
        {
            return 0;
            
        }
        
    return is_prime(n, delitel+1);
    
    
}