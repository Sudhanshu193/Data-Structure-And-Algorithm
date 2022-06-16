#include<stdio.h>
int main()
{
  char A[]="finding";
   int H[26]={0};
   for (int i = 0; A[i] != '\0'; i++)
   {
        H[A[i]-97]++;
   }
   for (int i = 0; i < 26; i++)
   {
        if (H[i]>1)
        {
            printf("%c is the duplicate\n", i+97);
            printf("%d is the time of duplication\n", H[i]);
        }     
   }
   return 0;
}