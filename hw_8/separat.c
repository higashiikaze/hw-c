/*разделение чисел на 2 массива*/


#include <stdio.h>
#define SIZE 10

int main (void)
{
    
    int arr[SIZE], pos[SIZE], neg[SIZE];
    int j=0; int k=0;
    int i;
    int num;    //for cheking correct value

    
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &num);
        if (num>-500 && num<500)
        {
            arr[i]=num;
        }
        else
        
        {
            printf("\nNumber must belong from -500 to 500\n\n");
            return 0;
        }
        
    }

    for (i = 0; i < SIZE; i++)
    {
        if (arr[i]<0)
        {
            neg[j]=arr[i];
            j++;        
        }
        else if (arr[i]>0)
        {
            pos[k]=arr[i];
            k++;
        }
        
    }

    for (i = 0; i < k; i++)
    {
        printf("%4d", pos[i]);
    }

    for (i = 0; i < j; i++)
    {
        printf("%5d", neg[i]);
    }
    
    
    return 0;
}