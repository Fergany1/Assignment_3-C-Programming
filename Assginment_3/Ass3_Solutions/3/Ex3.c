/**************************************************************************************************
 Name        : ex3.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 3
 **************************************************************************************************/
 
#include <stdio.h>

#define SIZE 10

void bubbleSort( int array[], const int size ); /* prototype */

int main( void )
{
	/* initialize array a */
	int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	int i; /* counter */

	printf( "Data items in original order\n" );

	/* loop through array a */
	for ( i = 0; i < SIZE; i++ )
	{
		printf( "%4d", a[ i ] );
	} /* end for */

	bubbleSort( a, SIZE ); /* sort the array */

	printf( "\nData items in ascending order\n" );

	/* loop through array a */
	for ( i = 0; i < SIZE; i++ )
	{
		printf( "%4d", a[ i ] );
	} /* end for */
	printf( "\n" );

	return 0; /* indicates successful termination */
} /* end main */


/* sort an array of integers using bubble sort algorithm */
void bubbleSort( int * const array, const int size )
{

	int i; /* pass counter */
	int j; /* comparison counter */
	int temp;
	/* loop to control passes */
	for ( i = 0; i < size - 1; i++ ) 
	{
		/* loop to control comparisons during each pass */
		for ( j = 0; j < size - 1; j++ ) 
		{
			/* swap adjacent elements if they are out of order */
			if ( array[ j ] > array[ j + 1 ] )
			{
				temp = array[ j ];
				array[ j ] = array[ j + 1];
				array[ j + 1] = temp;
			} /* end if */
		} /* end inner for */
	} /* end outer for */
} /* end function bubbleSort */
