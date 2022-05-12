#include<stdio.h>
void TOH(int n , int a , int b , int c )
{
    static int count = 0;
    if (n > 0)
    {
        TOH(n - 1, a, c, b);
        printf(" %d to %d\n",a, c);
        TOH(n - 1, b , a, c);
        count++;
    }
    printf("%d\n", count);
}
int main()
{
TOH(3 , 1,2,3);
}