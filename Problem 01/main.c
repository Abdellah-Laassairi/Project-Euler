#include <stdio.h>
#include <stdlib.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)


        for (j = 0; j < n-i-1; j++)
            if (arr[j] < arr[j+1])
                swap(&arr[j], &arr[j+1]);
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ",arr[i]);
}

int main()
{
    int n,i=0,k=0, c=0,j=0;
    scanf("%d",&n);
    int coins[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&coins[i]);
    }
    bubbleSort(coins,n);
    printArray(coins,n);
    for(j=0; j<n; j++)
    {
        c=coins[j]+c;
    }
    int sum=0;
        while(sum<c-sum){
            sum=coins[j]+sum;
            k++;
            }
    printf("\n la somme est %d et le nombre est %d ",c,k+1);
    return 0;
}
