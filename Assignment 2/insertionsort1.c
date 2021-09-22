#include<stdio.h>
void printArray(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%3000;
    }
    printf("Array elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void insertionSort(int arr[],int j,int n)
{
    int i,value;
    value=arr[j];
    i=j;
    while(i>0 &&arr[i-1]>value)
    {
        arr[i]=arr[i-1];
        i=i-1;
    }
    arr[i]=value;
    if(j+1<=n){
        insertionSort(arr,j+1,n);
    }
}
void myArray(int arr[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int num;
    printf("Enter the number of elements:\n");
    scanf("%d",&num);
    int arr[num];
    int n=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    printf("Sorted array:");
    insertionSort(arr,1,n-1);
    myArray(arr,n);
    return 0;
}
