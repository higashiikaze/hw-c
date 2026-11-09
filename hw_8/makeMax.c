#include <stdio.h>
#include <math.h>

#define SIZE 10

int arr[SIZE];

int stepSedgewick(int);
int countSedgewick(int);
void swap(int, int);
void sortShell(int);

int makeMax(void);

int main(int argc, char const *argv[])
{
    unsigned int num;

    static int count;

    scanf("%u", &num);

    for (int i = 0; i < SIZE; i++)
    {
        if (num/10>0)
        {
            arr[i]=num%10;
            count++;
            num/=10;
        }
        else arr[i]=num;
        
    }
    sortShell(count+1);
    
    unsigned int max=0;

    for (int i = count; i >=0; i--)
    {
        max=max+pow(10,i)*arr[i];
    }

    printf("\n");
    printf("%d", max);
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

void sortShell(int quon)
{
    int quonSteps=countSedgewick(quon);

    for (int i = quonSteps-1; i >= 0; i--)
    {
        int step=stepSedgewick(i);

        for (int j = step; j < quon; j++)
        {
            for (int k = j; k >= step; k-=step)
            {
                swap(k,k-step);
            }
        }
    }
}
