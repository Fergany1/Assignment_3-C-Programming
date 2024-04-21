#include <stdio.h>

// frequency of characters in a string
int count_frequency(char s[] , char character)
{
    int i ; 
    int frequency = 0;

    for (i = 0 ; s[i] != '\0' ; i++)
    {
        if (s[i] == character)
        {
            frequency++;
        }
    }

    return frequency;

}

int main ()
{
    char str[1000];
    char ch;
    int count;

    printf("Enter a string: "); 
    gets(str);

    printf("Enter a character: ");
    scanf("%c",&ch);
    count = count_frequency(str,ch);
    printf("Frequency of character %c in string %s is %d",ch,str,count);

    return 0;   
}