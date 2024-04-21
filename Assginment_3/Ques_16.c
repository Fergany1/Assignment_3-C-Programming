#include <stdio.h>

// Ques_16.c
// Reverse An Array
void reverse_array(int *array, int size)
{
    int start = 0 , end = size - 1;
    int temp;

    while (start < end)
    {
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}

int main(void)
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;

    for(i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
    reverse_array(array, 10);

    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}