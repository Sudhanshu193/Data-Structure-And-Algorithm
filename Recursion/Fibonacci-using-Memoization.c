#include<stdio.h>
int F[10];
int fib(int n)
{
    if (n<=1)
    {
        F[n] = n;
        return n;
    }
    else
        if (F[n - 2]==-1)
        {
            F[n-2]=fib(n-2);
        }
        if (F[n -1]== -1)
        {
            F[n -1] =fib(n-1);
        }
        return fib(n -2) + fib(n -1);
        

    
}
int main()
{
    int i;
    for(i=0 ; i< 10; i++)
         F[i] = -1;
    int r= fib(5);
    for (int j = 0; j < 10; j++)
    {
         printf(" %d ",F[j]);
    }
    printf("\n");
    printf("%d",r);
   
}