#include<stdio.h>
int main()
{
 char A[]="decimal";
 char B[] ="medical";
 int H[26]={0};
 int i;
 for ( i = 0; A[i] != '\0'; i++)
 {
    H[A[i]-97]++;
 }
 for ( i = 0; B[i] !='\0'; i++)
 {
    H[B[i]-97]--;
    if (H[i]<0)
    {
        printf("Its not anagram");
        break;
    }
    
 }
 if (B[i]=='\0')
 {
    printf("its anagram");
 }
 
 
}