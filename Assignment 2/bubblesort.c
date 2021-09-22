#include <stdio.h>
#define SIZE 3000

int myArray[SIZE - 1];

void bubbleSort(int arr[],int n)
{
    int i, j;

    for(i = 1; i < SIZE; i++)
    {
        for( j = 0; j < SIZE - 1; j++)
        {
            if(myArray[j] > myArray[j+1])
                swapf(j, j+1);
        }
    }
    if (n - 1 > 1) {
        bubbleSort(arr, n-1);
    }
}

void printSorted()
{
    int i;
    for( i = 0; i < SIZE - 1; i++)
    {
        printf("%d\t", myArray[i]);
    }
}

void swapf(int x, int y)
{
    int temp;
    temp = myArray[x];
    myArray[x] = myArray[y];
    myArray[y] = temp;

}

void init()
{
    int i;
    for( i = 0; i < SIZE - 1; i++)
    {
        myArray[i] = rand()%3000;
    }
}

int main()
{
    int arr,n;
    init();
    bubbleSort(arr,n);
    printSorted();
    return 0;
}
