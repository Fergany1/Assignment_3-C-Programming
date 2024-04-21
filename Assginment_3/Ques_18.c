#include <stdio.h>
#include <string.h>

// Find Longest Consecutive
int FindLongestConsecutive(int Array_size,int * Array,int Number)
{
    int i;
    int current_count = 0;
    int longest_count = 0;

    for(i=0;i<Array_size;i++)
    {
        if (Number == Array[i])
        {
            // Increment the current consecutive count
            current_count++;
            if(current_count > longest_count)
            {
                // Compare the current consecutive count with the longest consecutive count
                longest_count = current_count;
            }
        }
        else
        {
            // Reset the current consecutive count
            current_count = 0;
        }
    }
    return longest_count;
}

int main(int argc, char)
{
    int i;
    int Array[15];
    int Number;
    int Array_size;
    int longest_count;
    printf("Enter the size of the array: ");
    scanf("%d",&Array_size);
    printf("Enter the elements of the array: ");
    for(i=0;i<Array_size;i++)
    {
        scanf("%d",&Array[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d",&Number);
    longest_count = FindLongestConsecutive(Array_size,Array,Number);
    printf("The longest consecutive number is: %d",longest_count);
    return 0;
    
}