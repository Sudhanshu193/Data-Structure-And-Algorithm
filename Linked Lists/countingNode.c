#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;

    struct Node *next;

}*first=NULL;

void create(int a[], int n)
{
  struct Node *t , *last;
  first=(struct Node *)malloc(sizeof(struct Node));
  first->data=a[0];
  first->next=NULL;
  last = first;

    for (int i = 1; i < n; i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }  
}
int count(struct Node *p)
{
    int count =0;

    while (p!=NULL)
    {
        count ++;
        p=p->next;
    }
    return count;
}
int sum(struct Node *p)
{
    int sum =0;

    while (p!=NULL)
    {
        sum =sum +p->data;
        p=p->next;
    }
    return sum;
}


int main()
{
    int a[]={12,23,45,5,6,6,7};
    int n = sizeof(a)/sizeof(a[0]);
    create(a,n);
    printf("Number of node : %d\n",count(first));
    printf("Sum of node data : %d",sum(first));
    

}