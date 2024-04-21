#include <stdio.h>

// Fibonacci Series
long fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int num , index_num;
    printf("Enter The Index Number : ");
    scanf("%d",&index_num);
    num = fibonacci(index_num);
    printf("\nThe %dth term is : %ld",index_num,num);
    return 0;
}