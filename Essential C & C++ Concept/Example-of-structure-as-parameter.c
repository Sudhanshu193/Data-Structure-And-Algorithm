#include<stdio.h>
 
struct circle
{
    int radius;
    float pi;
};

 void initialize(struct circle *c1 , int r , int p)
 {
   c1->radius=r;
   c1->pi=p;
 }

 float area(struct circle c)
 {
     return c.pi*c.radius*c.radius;
 }

 void change_radius(struct circle *c2 , int r)
 {
     c2->radius=r;
 }
int main()
{
struct circle c;
initialize(&c, 5, 3.14);
printf("%f\n",area(c));
change_radius(&c, 10);
printf("%d",c.radius);
return 0;


}