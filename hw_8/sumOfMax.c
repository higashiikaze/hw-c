#include <stdio.h>
#include <math.h>

#define SIZE 10

int arr[SIZE];

int stepSedgewick(int);
int countSedgewick(int);
void swap(int, int);

int sumOfMax(void);

int main(int argc, char const *argv[])
{
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%4d", &arr[i]);
    }

    printf("\n");
    printf("%d", sumOfMax());
    printf("\n");

    return 0;
}

int stepSedgewick(int s)
{
    if (s%2==0)
    {
        return 9*pow(2,s)-9*pow(2,s/2)+1;
    }
    else return 8*pow(2,s)-6*pow(2,(s+1)/2)+1;
}

int countSedgewick(int n)
{
    int count=0;
    while (stepSedgewick(count)<=n)
    {
        count++;
    }
    return count;
}

void swap(int i, int j)
{
    if (arr[j]>arr[i])
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
        
}

int sumOfMax(void)
{
    
    //сортируем введенный массив Шеллом с последовательностью Седжвика
    int quonSteps=countSedgewick(SIZE);
    
    for (int i = quonSteps-1; i >= 0; i--)
    {
        int step=stepSedgewick(i);
        
        for (int j = step; j < SIZE; j++)
        {
            for (int k = j; k >= step; k-=step)
            {
                swap(k,k-step);
            }
            
        }
        
    }

    return arr[SIZE-1]+arr[SIZE-2];
}