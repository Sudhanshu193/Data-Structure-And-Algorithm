#include<stdio.h>
int main()
{
    char c[]="WELCOME";
    int i;
    for ( i = 0; c[i] != '\0'; i++)
    {
      if (c[i]>=65 && c[i]<=90)
      {
        c[i]+= 32;
      }
      else if (c[i]>=97 && c[i]<=122)
      {
        c[i]-=32;
      }
    }
    printf("%s",c);
    

}