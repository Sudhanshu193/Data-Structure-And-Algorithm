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
    //linked List creation
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
void reversingWithArray(struct Node *p , int n)
{
    int arr[n];
    int i=0;
 while (p !=NULL)
 {
    arr[i]= p->data;
    p=p->next;
    i++;
 }
 p=first;
 i--;
 while (p)
 {
    p->data = arr[i];
    p=p->next;
    i--;
 }
}
int main()
{
    int a[]={3,4,5,6,8,10};
    int n= sizeof(a)/sizeof(a[0]);
    Create(a,n);
    Display(first);
    reversingWithArray(first , n);
    printf("\n");
    Display(first);
    
}