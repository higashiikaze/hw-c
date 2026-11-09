/*инверсия пполовин массива*/

#include <stdio.h>
#define SIZE 10

int arr[SIZE];

void change(int, int);

int main(int argc, char const *argv[])
{
    int i;
    
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
                
    }

    change(0,SIZE/2);
    change(SIZE/2, SIZE);
    
    for (i = 0; i < SIZE; i++)
    {
        printf("%4d", arr[i]);
    }
    
    printf("\n\n");
    
    return 0;
}

void change(int a, int b)
{
    int temp;
    int j = b;

    
    for (int k = a; k < (b+a)/2; k++)
    {
        if (j>=k)
        {
        j--;    
        temp=arr[k];
        arr[k]=arr[j];
        arr[j]=temp;
        
        }
        
    }
   
}
