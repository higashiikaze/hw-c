#include <stdio.h>

long power (int, int);       //степень числа, рекурсия

int main (void)
{    
    int num, pow;

    scanf("%d %d", &num, &pow);

    if (num<=100 && num>=-100 && pow>0 && pow<100)
    {
        printf("%ld\n", power(num, pow));
    }

    else if (pow==0 && num!=0)
    {
        printf("1");
    }
    else if (num==0)
    {
        printf("0");
    }
    
    
    return 0;
    
}

long power (int n, int pow)
{
    if (pow>0)
    {
        return n*power(n, pow-1);
    }
    else return 1;  //когда тут был 0, то произведением тоже был 0
    
}