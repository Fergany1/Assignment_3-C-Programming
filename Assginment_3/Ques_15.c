#include <stdio.h>

// Concatenate two strings
void conc_string(char str1[], char str2[])
{
    int i , j;

    // This loop is to store the length of str1 in i
    for (i = 0 ; str1[i] != '\0' ; ++i);

    // This loop would concatenate the string str2 at
    // the end of str1
    for (j = 0 ; str2[j] != '\0' ; ++j, ++i)
    {
        str1[i] = str2[j];
    }
    // \0 represents end of string
    str1[i] = '\0';
}

int main ()
{
    char str1[100] , str2[100];

    printf("Enter first string :");
    gets(str1); // get first string

    printf("Enter second string :");
    gets(str2); // get second string

    conc_string(str1 , str2);

    printf("The concatenated string is : %s" , str1);

    return 0;
}