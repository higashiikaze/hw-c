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

int to_bin (int);       //подсчет количества единиц в двоичной записи числа

int main (void)
{
    INITIALIZE_CONSOLE();

    unsigned int num;

    scanf("%d", &num);

    printf("%d\n", to_bin(num));

    return 0;

}

int to_bin (int a)
{
    int q=0;

    while (a>0)
    {
        if (a%2==1)
        {
            q++;
            //printf("q = %d\n", q);

        }
        a/=2;
        //printf("a = %d\n", a);
    }

    return q;
    
}