#include <stdio.h>

#define TRUE 1
#define FALSE 0

// Func Return TRUE if the characters are distinct else return FALSE
int check_distinct(char s[])
{
    int i = 0 , j = 0;
    int results = TRUE;

    while (s[i] != '\0')
    {
        j = i + 1;
        while ((s[j] != '\0'))
        {
            if(s[i] == s[j])
            {
                results = FALSE;
            }
            j++; // to compare with the next character
        }
        i++; // to move to the next character
        
    }
    return results;
}

int main()
{
    int results;
    char str[1000];

    printf("Enter a string: ");
    scanf("%s",str);

    results = check_distinct(str);

    printf("The String is %s", (results == TRUE) ? "Distinct" : "Not Distinct");
}