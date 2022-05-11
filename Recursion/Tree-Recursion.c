#include<stdio.h>
void fun(int n)
{
 if(n>0)
 {  //when more then one recursive function is in the function then that function is know as tree recursion;
     printf("%d\n", n);
     fun(n-1);
     fun(n-1);
     fun(n-1);
 }
}
int main()
{
int x =3;
fun(3);

return 0;
}