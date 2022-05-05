#include<stdio.h>
int power(int m , int n)
{
    
    if(n==0)
        return 1;
    else
      return power(m , n-1)*m;
    
}
/*
int power(int m , int n)
{
    static int p=1;
    if( n==0)
    {
        return 1;
    }
    else
    {
        p*=m;
        power(m , n-1);
    }
    return p;
}*/
int main()
{

int result=power(2,3);
printf("%d", result);

return 0;
}