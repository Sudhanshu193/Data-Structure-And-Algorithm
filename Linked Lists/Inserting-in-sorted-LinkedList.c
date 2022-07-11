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
         
    }
    
}

void sortInsert(struct Node *p , int x)
{
    struct Node *t, *q=NULL;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;

    if(first==NULL)
    {
        first=t;
    }
    else
    {
        while(p &&  p->data < x)
        {
            q=p;
            p=p->next;
            
            if(p==first)
            {
                t->next=first;
                first =t;
            }
            else
                {
                
                    t->next=q->next;
                    q->next=t;
                }
        }
    }
    
}

int main()
{
    // int a[]={3,4,5,6,8,10};
    // int n= sizeof(a)/sizeof(a[0]);
    // Create(a,n);
    sortInsert(first,9);
    sortInsert(first,15);
    sortInsert(first,10);
    Display(first);

}