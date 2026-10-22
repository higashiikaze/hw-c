#include <stdio.h>

int ascend (int, int);       //числа в порядке возрастания, рекурсия

int discend (int, int);       //числа в порядке убывания, рекурсия

int main (void)
{    
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if (num1<num2)
    {
        ascend(num1, num2);
    }

    else if (num1>num2)
    {
        discend(num1, num2);
    }
    
    else printf("%d\n", num1);

    return 0;

}

int ascend (int a, int b)
{
    if (a<=b)
    {
        printf("%d ", a);
        return ascend(++a, b);
    }
    
    else return 0;
      
}

int discend (int a, int b)
{
    if (a>=b)
    {
        printf("%d ", a);
        return discend(--a, b);
    }

    else return 0;
        
}