#include<stdio.h>
int main()
{
    char A[]=" how are you doing";
    int words=0;
    for (int i = 0; A[i]!= '\0'; i++)
    {
        if (A[i] == ' ' && A[i-1]!= ' ')
        {
            words++;
        }
        
    }
    printf(  "Number of words are : %d", words);
    
}