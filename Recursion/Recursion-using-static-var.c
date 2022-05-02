#include<stdio.h>
//int x=0;   we can use gobal variable in place of static as well and the value will be global and last change will be in all recursive call.
int fun(int n)
{  static int x =0;
    if (n>0)
    {
      x++;
      return fun(n-1)+x;  
    }
    return 0;
    
}
int main()
{
    int a = 5;
    printf("%d",fun(a));

    return 0;

}