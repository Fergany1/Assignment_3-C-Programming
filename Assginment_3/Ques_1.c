#include <stdio.h>
#define ARR_SIZE 10

int summation(int numbers_size, int* numbers)
{
    int sum = 0,i;
    for(i=0;i<numbers_size;i++)
    {
        sum += numbers[i];
    }
}
int sum_array(const int arr[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int i , arr_1[ARR_SIZE];
    int arr_2[] = {10,20,30,40,50,60,70,80,90,100};

    printf("Please enter the array elements : \n");
    for (i = 0; i < ARR_SIZE; i++)
    {
        scanf("%d", &arr_1[i]);
    }
   // sum_array(arr_1, ARR_SIZE);
    printf("The sum of the array elements is : %d", sum_array(arr_1, ARR_SIZE));
    printf("\n");
    printf("The sum of the array elements is : %d", summation(10, arr_2));
    
    return 0;
}