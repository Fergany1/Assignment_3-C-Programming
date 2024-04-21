#include <stdio.h>

// Converts upper case to lower case
void upper_to_lower(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        i++;
    }

}
    
int main()
{
    char s[100];
    printf("Enter the string : ");
    gets(s);
    upper_to_lower(s);
    printf("The string in lower case : %s", s);

    printf("\n");

    return 0;
}