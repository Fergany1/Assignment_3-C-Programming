#include <stdio.h>

#define ARRAY_SIZE_1 10
#define ARRAY_SIZE_2 15

int  compare_Array_size(int *ARR_1, int *ARR_2 , int ARR_SIZE)
{
    int i;
    for(i = 0 ; i < ARR_SIZE ; i++)
    {
        if (ARR_1[i] != ARR_2[i])
        {
            // if THe Two Arrays Are Different
            return 1;
        }

    }
    // The Arrays Are Identical
    return 0;
}

int main(int argc, char)
{
    int arr_1[ARRAY_SIZE_1] = {1,1,11,1,1,1,1,1,1};
    int arr_2[ARRAY_SIZE_1] = {1,1,12,3,4,5};
    int res = 0;
    res = compare_Array_size(arr_1,arr_2,ARRAY_SIZE_1);
    if (res == 0)
    {
        printf("The Two Arrays are Identical\n");
    }
    else
    {
        printf("The Two Arrays are Different\n");
    }

    return 0;
}