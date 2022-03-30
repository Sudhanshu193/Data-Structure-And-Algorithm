#include<stdio.h>

struct Complex
{
  int real;
  int img;
};
int main()
{
 struct Complex c = {10,5};
printf("Complex number is %d + %di" ,c.real,c.img);
}