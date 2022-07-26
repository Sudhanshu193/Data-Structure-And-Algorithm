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
int Delete( struct Node *p, int postion)
{
    struct Node  *q;
    int x=-1,i;
    if(postion==1)
    {
        x=first->data;
        p=first;
        first=first->next;
        free(p);
        return x;
    }
    else
    {
        for(i=0; i<postion-1 ; i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
        return x;

    }
    
}
 int isSort(struct Node *p)
 {
    int x=-1;
    while (p != NULL)
    {
        if (p->data <x)
        {
            return 0; 
        }
        x=p->data;
        p=p->next;
    }
    return 1;   
 }
 void duplicate(struct Node * p)
 {
   struct Node *q = first->next;
   while (q !=NULL)
   {
        if(p->data!= q->data)
        {
            p=q;
            q=q->next;
        }
        p->next=q->next;
        free(q);
        q= p->next;
   }
      
 }


int main()
{
  insert(first, 0 ,10);
  insert(first, 1,30);
//   insert(first, 2,30);
  insert(first, 3,32);
  insert(first, 4, 29);
//   insert(first, 5, 29);
  insert(first, 6, 38);
  
  Display(first);
printf("\n");
 printf("%d is deleted\n" , Delete(first, 4));
 Display(first);
 if (isSort(first))
 {
    printf("\nyes sorted");
 }
 else 
    printf("\nit is not sorted");

//duplicate(first);
printf("\n");
printf("the deleted index is :%d " ,Delete(first, 4));

//Display(first);

 
}