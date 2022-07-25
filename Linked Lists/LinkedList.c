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
struct Node* LSearch(struct Node*p, int key)
{
    while (p!=NULL)
    {
        if (key == p->data)
        {
            return p;
            
        }
        p=p->next;
        
    }
    return NULL;
    
}
struct Node *RSearch(struct Node*p , int key)
{
    if (p==NULL)
    {
        return NULL;
    }
    if (key==p->data)
    {
        return p;
    }
    return RSearch(p->next,key);
}

//Improved LinearSearch
struct Node *Improved(struct Node *p, int key)
{
    struct Node *q =NULL;
    while (p!=NULL)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
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

//Inserting node at start
void insertAtfirst(struct Node *p , int x)
{
    struct Node*t;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    t->next=first;
    first =t;

}
void insert(struct Node *p, int pos, int x)
{
    struct Node *t;
    if (pos<0 || pos>count(p))
    {
        return ;
    }
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    if(pos==0)
    {
        t->next=first;
        first=t;
    }
    else
    { for (int i = 0; i < pos-1 ; i++)
        {
                p=p->next;
        }       
        t->next=p->next;
        p->next=t;
    }
}

int main()
{ 
    struct Node* temp;
    int a[]={3,4,5,6,7,8,9};
    int n= sizeof(a)/sizeof(a[0]);
    Create(a,n);
    Display(first);
    printf("\n");
    //temp=Lsearch(first, 8);
    //temp=RSearch(first, 9);
    temp=Improved(first,9);
    if (temp)
    {
        printf("Element found : %d\n", temp->data);
    }
    else
        printf("Element not found");
    Display(first);

    printf("\nInserting element at first:\n");
    insertAtfirst(first,20);
    Display(first);


    printf("\n Inserting at position:\n");
    insert(first, 4,12);
    Display(first);
}
