#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;

    struct Node *next;

}*first=NULL;

void Create(int a[], int n)
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
void Display(struct Node *p)
{
    while (p!=NULL)
    {
       
        printf("%d ", p->data);
        p=p->next;
         //printf("%d\n", p->next);
         // printf("%d\n", p);
    }
    
}

int main()
{
    int a[]={3,4,5,6,7,8,9};
    int n= sizeof(a)/sizeof(a[0]);
    Create(a,n);
    Display(first);

}