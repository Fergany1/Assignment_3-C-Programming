#include <stdio.h>

#define SIZE_1 10
#define SIZE_2 10

// Func Selection Sort
void selectionSort(int arr[], int n)
{
    int i, j, temp;
    int min_pos ;

    for ( i = 0; i < n; i++)
    {
        min_pos = i;
    
        for (j = 1 + i ; j < n ; j++)
        {
            if(arr[j] < arr[min_pos])
            {
            min_pos = j;
          }
         
        }
        temp = arr[i];
        arr[i] = arr[min_pos];
        arr[min_pos] = temp;
    }
}

int main(int arg)
{
    int arr[SIZE_1] = {1,4,6,8,9,4,25,3,7,9};
    int arr2[SIZE_2] = {4,5,7,52,1,5,89,5,4,5};     

    printf("Unsorted array_1: \n");
    for(int i = 0; i < SIZE_1; i++)
    {
        printf("%d ", arr[i]);
    }
    selectionSort(arr, SIZE_1);
    printf("\nSorted array: \n");
    for(int i = 0; i < SIZE_1; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("\nUnsorted array_2: \n");
    for(int i = 0; i < SIZE_2; i++)
    {
        printf("%d ", arr2[i]);
    }
    selectionSort(arr2, SIZE_2);

    printf("\nSorted array_2: \n");
    for (int i = 0; i < SIZE_1; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;

}