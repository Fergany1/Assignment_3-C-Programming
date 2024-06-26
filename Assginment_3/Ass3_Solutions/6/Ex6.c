/**************************************************************************************************
 Name        : ex6.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 6
 **************************************************************************************************/

#include <stdio.h>

int Linear_Search_Find_Last(int Array_size, int Array[],int Item); //Function Prototype

int main( void )
{
    const int size = 5;
    int i;
    int array[size];
    int location;
    int element;

    printf("Enter the required array: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter element for search: ");
    scanf("%d",&element);

	/* pass the array to the function */
    location = Linear_Search_Find_Last(size,array,element);
    if(location == -1)
    {
        printf("\nElement not found\n");
    }
    else
    {
        printf("\nThe element at the location: %d",location);
    }
    return 0;

}

int Linear_Search_Find_Last(int Array_size, int Array[],int Item)
{
    int i;
	int index = -1; /* assume the element not exist in the array */

    for(i=0;i<Array_size;i++)
	{
        if(Item==Array[i])
		{
			/* Index will contain the array index of the last time the element found in the array */
			index = i;
		}
    }
	/* return the last value of the index variable */
    return index;
}

/********************************** Another Method start looping from the end of the array ****************************************
int Linear_Search_Find_Last(int Array_size, int Array[],int Item)
{
    int i;
	int index = -1; // assume the element not exist in the array

	// start looping from the end of the array
    for(i=Array_size-1;i>=0;i--)
	{
    	// the first occurrence from the end of the array means that this is the last occurrence of the number in the array
        if(Item==Array[i])
		{
			// Index will contain the array index of the last time the element found in the array
			index = i;
			break;
		}
    }
	// return the last value of the index variable
    return index;
}
***********************************************************************************************************************************/
