#include <stdio.h>

#define SIZE_1 10
#define SIZE_2 10

// Func Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(int arg)
{
    int arr[SIZE_1] = {1,4,6,8,9,4,25,3,7,9};
    int arr2[SIZE_2] = {4,5,7,52,1,5,89,5,4,5};


    printf("Element Of Array 1 : \n");
    for (int i = 0; i < SIZE_1; i++)
    {
        printf(" %d ", arr[i]);
    }

    bubbleSort(arr, SIZE_1);
    printf("\nSorted Array 1 : \n");
    for (int i = 0; i < SIZE_1; i++)
    {
        printf(" %d ", arr[i]);
    }
    
    printf("\n-------------------------------------------\n");

    printf("Element Of Array 2 : \n");
    for (int i = 0; i < SIZE_2; i++)
    {
        printf(" %d ", arr2[i]);
    }
    bubbleSort(arr2, SIZE_2);
    printf("\nSorted Array 2 :  \n");
    for (int i = 0; i < SIZE_2; i++)
    {
        printf(" %d ", arr2[i]);
    }

    return 0;
}