#include <stdio.h>

#define ARR_SIZE 10
// Find The Second largest number in an array
int secondLargestNumberInArray(int *arr, int size)
{
    int i; 
    int largest , second_largest;

    for ( i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    return second_largest;
}

int main()
{
    int arr[ARR_SIZE] ,i ;
    int RES;
    printf("Please enter the array elements : \n");
    for (i = 0; i < ARR_SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    RES = secondLargestNumberInArray(arr, ARR_SIZE);
    printf("The second largest number in the array is : %d", RES);
    
    return 0;
}