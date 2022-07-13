#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;

}*first=NULL;

int count(struct Node *p)
{
    int N_count=0;
    while (p!=NULL)
    {
        N_count++;
        p=p->next;
    }
    return N_count;   
}
 

void insert(struct Node *p, int index , int x)
{
    int i;
    struct Node *t;
    if (index<0 ||index >count(p))
    {
        return;
    }
    
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;

    if (index ==  0)
    {
        t->next=first;
        first=t;
    }
    else
    {
        for ( i = 0; i < index-1; i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}
void Display(struct Node *p)
{
    while (p!=NULL)
    {
       
        printf("%d ", p->data);
        p=p->next;;
    }
    
}
int Delete( int postion)
{
    struct Node *p, *q;
    int x=-1,i;
    if(postion==1)
    {
        x=first->data;
        p=first;
        first=first->next;
        Delete p;

    }
}



int main()
{
  insert(first, 0 ,10);
  insert(first, 1,2);
  insert(first, 0,20);
  insert(first, 3,32);
  insert(first,4 , 30);
  insert(first,5, 300);
  insert(first,6 , 3);
  
  Display(first);
}