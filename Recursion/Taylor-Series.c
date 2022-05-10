#include<stdio.h>
int power(int m , int n)
{
    if (n==0)
        return 1;
    else
        return power(m , n-1)*m;                
    
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return fact(n-1)*n;    
}
int taylor(int x, int n)
{
    if (n==0)
    {
        return 1;
    }
    else
        return taylor(x , n-1) + power(x , n)/fact(n);
    
}
int main()
{
    int x=4;
    int n =4;
    int result = taylor(x, n);
    printf("%d", result);
}