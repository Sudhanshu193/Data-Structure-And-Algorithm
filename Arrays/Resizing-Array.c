#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p,*q;
int i;
p = (int *)malloc(5*sizeof(int));
p[0]=3;
p[1]=5;
p[2]=9;
p[3]=7;
p[4]=6;
q =(int *)malloc(5*sizeof(int));
for ( i = 0; i < 5; i++)
{
    q[i]=p[i];
}
q[5]=20;
free(p);
p=q;
q= NULL;


for (i = 0; i <6; i++)
{
    printf("the values are:%d \n",p[i]);
}

return 0;
}