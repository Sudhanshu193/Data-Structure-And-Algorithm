#include<stdio.h>
int combination(int n , int r)
{
    if (n == 0 || r == 0 )
        return 1;
    else
        return combination(n - 1 , r - 1) + combination(n - 1 , r);    
    
}
int main()
{
 int n , r;
 printf("Enter the value of n and r");
 scanf("%d%d",&n,&r);
 int result = combination(n , r);
 printf("The combination is: %d", result);
}