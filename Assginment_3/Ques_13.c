#include <stdio.h>

void remove_all_except_alphabet(char str[])
{
    int i , j;
    for(i = 0 ; str[i] != '\0' ; i++)
    {
        while ( !((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) &&  (str[i] != '\0') )/* condition */)
        {
            /* Enter here in case the element is not alphabet and it is not equals to null */
            for(j = i ; str[j] != '\0' ; j++)
            {
                /* remove this not alphabet character by making each element equals to the value of the next element */
                str[j] = str[j+1];
            }
        }
        
    }
}