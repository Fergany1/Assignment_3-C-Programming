#include <stdio.h>
#include <string.h>

// Reverse A String
void reverse_string(char str[])
{
    int len = strlen(str);
    int i = 0 ;
    int j = len - 1;
    char temp;

    // loop through the string from both ends
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    char string[100];
   

    printf("Enter The String \n");
    gets(string);

    printf("The String Before Reversing %s\n" , string);

    reverse_string(string);

    printf("The Reversed String %s\n", string);

    return 0;
}