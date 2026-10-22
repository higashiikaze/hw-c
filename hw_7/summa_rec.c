#include <stdio.h>
#include <stdlib.h>

int summa (int);       //сумма цифр числа, рекурсия

int main (void)
{    
    int num;

    scanf("%d", &num);

    if (num<0)
    {
        num=abs(num);
    }

    else if (num==0)
    {
        printf("%d", num);
    }

    printf("%d\n", summa(num));

    return 0;
    
}

int summa (int a)
{
    if (a>0)
    {
        return a%10+summa(a/10);
    }
    else return 0;
    
}