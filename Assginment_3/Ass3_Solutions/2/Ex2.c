/**************************************************************************************************
 Name        : ex1.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 2
 **************************************************************************************************/
 
#include <stdio.h>

#define TRUE  1
#define FALSE 0

int check_distinct(char s[])
{
	int i=0,j=0;
	int results = TRUE;
	/* the idea is compare each element with all the following array elements */
	while(s[i] != '\0') /* loop until the end of the string */
	{
		j = i+1; /* start compare from the next character */
		while(s[j] != '\0')
		{
			if(s[i] == s[j])
			{
				results = FALSE; /* this character is not distinct */
			}
			j++; /* to compare with the next character */
		}
		i++; /* to check the next character */
	}
	return results;
}

int main(void)
{
	char str[20];
	int results;
	printf("Please enter ther required sting message : ");
	gets(str);
	printf("\n");
	
	results = check_distinct(str);
	
	if(results == TRUE)
	{
		printf("all characters are distinct in the string\n");
	}
	else
	{
		printf("characters are not distinct in the string\n");
	}
	return 0;
}


