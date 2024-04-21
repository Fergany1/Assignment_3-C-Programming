#include <stdio.h>

#define ARR_SIZE 100

int main()
{
    int i , Arr[ARR_SIZE];
    int num_index ;

    printf("Enter the element index : ");
    scanf("%d",&num_index);

    Arr[0] = 1;
    for ( i = 1; i < ARR_SIZE; i++)
    {
        Arr[i] = Arr[i-1] + 2;
        /* code */
    }

    printf("\nThe %dth term is:%d",num_index,Arr[num_index-1]);

    return 0;
    
    
}