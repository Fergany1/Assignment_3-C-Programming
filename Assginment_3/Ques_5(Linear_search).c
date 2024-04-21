#include <stdio.h>

#define SIZE 10

// Linear Search
int Linear_Search(int size , int* arr , int item )
{
    int i = 0;

    for (i =0 ; i <size ; i++) 
    {
        if (item == arr[i])
        {
           // printf("Item found at %d position",arr[i]);
           return (i);
        }
    }
    return -1;
}

int main()
{
    int element;
    int location;
    int arr[SIZE];
    int i = 0;

    printf("Enter the required array: \n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The Array is : \n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter The Element :  \n");
    scanf("%d", &element);

    location = Linear_Search(SIZE, arr, element);


    if (location == -1)
    {
        printf("Item not found");
    }
    else
    {
        printf("Item found at %d position", location);
    }
    return 0;
}