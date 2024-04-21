#include <stdio.h>

// swap two arrays
void *swap_arrays(int *arr_a, int *arr_b, int a_size , int b_size)
{
    int temp;
    for (int i = 0; i < b_size; i++)
    {
        temp = arr_a[i];
        arr_a[i] = arr_b[i];
        arr_b[i] = temp;
    }
    return arr_a;
}

int main(void)
{
    int array1[5] = { 1, 2, 3, 4, 5};
    int array2[5] = { 6, 7, 8, 9, 10};
    int *result;
    printf("Array1 before the Swap : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\n");
    printf("Array2 before the Swap : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array2[i]);
    }
    printf("\n");
    result = swap_arrays(array1, array2, 5, 5);
    printf("Array1 after the Swap : ");
    for(int i =0 ; i < 5 ; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\n");
    printf("Array2 after the Swap : ");
    for(int i =0 ; i < 5 ; i++)
    {
        printf("%d ", array2[i]);
    }
    printf("\n");
    return 0;

}