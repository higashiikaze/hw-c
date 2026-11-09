//сдвиг на STEP

#include <stdio.h>

#define SIZE 12
#define STEP 4

int arr[SIZE];

void reverse(int,int);

void shift(int, int);

int main(void)
{
        
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);

    }
    printf("\n");

    shift(SIZE, STEP);

    for (int i = 0; i < SIZE; i++)
    {
        printf("%7d", arr[i]);

    }
    printf("\n");

    return 0;
}

// Функция для разворота части массива от first до last
void reverse(int first, int last)
{
    int temp;
    
    while (first < last)
    {
        temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    
    }
}

//сдвиг вправо на k позиций
void shift(int n, int k)
{
    
    if (n <= 1)
    {
        return; //если размер массива 1, то сдвигать нечего
    }
    
    k = k % n; //берем остаток от деления SIZE на STEP

    if (k == 0)
    {
        return; //если остаток 0 значит сдвиг равен размеру массива и сдвигать нечего
    }

    //все элементы с двух концов до середины
    reverse(0, n - 1);

    //элементы от 0 до STEP
    reverse(0, k - 1);

    //элементы от STEP до SIZE
    reverse(k, n - 1);
}