/*вывод на экран экранэлементов, которые в массиве встречаются
только один раз*/

#include <stdio.h>
#define SIZE 10

int main (void)
{
    int zahlen[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &zahlen[i]);
    }

    /*for (int i = 0; i < SIZE; i++)
    {
        printf("Element %d: %4d\n", i, zahlen[i]);
    }*/

    int quon;
    int i, j;
    
    for (i = 0; i < SIZE; i++)
    {
        quon=0;
        for (j = 0; j < SIZE; j++)
        {
            if (i!=j)
            {
                if (zahlen[i]==zahlen[j])
                {
                    quon++;
                    //printf("quon = %d\n", quon);
                }
            }
                        
        }

        if (quon==0)
        {
            printf("%4d", zahlen[i]);
        }
        
    }
    
    printf("\n");

    return 0;
}