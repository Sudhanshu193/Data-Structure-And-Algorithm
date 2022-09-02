#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node()
    {
        next=nullptr;
    }
};

class LinkedList
{
  Node* first;
  Node* third;

  

 public:
 int length;
  LinkedList()
  {
    first=nullptr;
    third= nullptr;
    length=0;
  }

 LinkedList(int a[], int n)
{
    length=n;
     Node *t , *p;
    first=new Node;
    first->data=a[0];
    first->next=NULL;
    p = first;

    for (int i = 1; i < n; i++)
    {
        t= new Node;
        t->data=a[i];
        t->next=NULL;
        p->next=t;
        p=t;
    }

   
}

LinkedList(int arr[] , int n, bool loop)
{
    if(loop)
    {
        if(n>0)
        {
          first = new Node;
          first->data=arr[0]; 
          first->next=nullptr; 

          Node*p=first;

          for (int i = 1; i < n; i++)
          {
            Node*t=new Node;
            t->data=arr[i];
            t->next=nullptr;
            p->next=t;
            p=t;
          }
        Node *q=first;
        int random=rand()%n;
        for (int i = 0; i < random; i++)
        {
            q=q->next;
        }
        p->next=q;
        }
    }
}
bool Isloop()
{
    Node*p,*q;
    p=first;
    q=first;

    do
    {
        p=p->next;
        q=q->next;
        if(q!=nullptr)
           { 
            q=q->next;
           }
        else
            q=nullptr;

        if(p==q)
            return true;    
    }while(p && q);
    return false;
}
void insert(int v)
{
    Node *t =new Node();
    Node *p =first;
    Node*q =nullptr;

    while (p !=nullptr)
    {
        q=p;
        p=p->next;
    }
    t->data=v;
    t->next=nullptr;
    q->next=t;
    
}
void insert(int v, int index)
{
    Node * t = new Node();
    Node* p=first;
    Node *q=nullptr;
    t->data=v;

    for (int i = 0; i < index; i++)
    {
        q=p;
        p=p->next;
    }
    q->next=t;
    t->next=p;
    
}
void Delete(int index)
{
    Node *p=first;
    Node *r=nullptr;
    Node *q= nullptr;

    if(index==1)
    {
        first=first->next;
        delete[]p;
        return;
        
    }
    for (int i = 0; i < index; i++)
    {
        r=q;
        q=p;
        p=p->next;
    }
      r->next=p;
      delete []q;
    
}
 void Display()
  {
    Node *p=first;
    while (p !=nullptr)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    
  }

void reverse()
{
    Node *p=first;
    Node *q = nullptr;
    Node *r = nullptr;

    while (p)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
    
}

//  void recersiveDisplay() 
//  { Node *p=first;
//     if(p==nullptr)
//     {
//        return;
//     }
//      cout<<p->data<<" ";
//      recersiveDisplay(p->next);
//  }

//concatination
LinkedList add( LinkedList b)
{
    Node *p =first;
    while (p->next!=nullptr)
    {
        p=p->next;
    }
    p->next=b.first;
    
}
 
 LinkedList marge( LinkedList b)
 {
    Node *third;
    Node * last;
    Node *second =b.first;

    if (third->data < second->data)
    {
        last = third = first;
        third = third ->next;
        last ->next=nullptr;
    }
    else
    {
        last = first= second;
        second = second->next;
        last ->next= nullptr;
    }

    while(third!=nullptr && second !=nullptr)
    {
        if (third->data <second->data)
        {
            last->next=first;
            last =first;
            third =third->next;
            last -> next = nullptr;
        }
        else
        {
            last ->next= second;
            last = second;
            second= second->next;
            last ->next = nullptr;
        }
        
    }
    if (third !=nullptr)
    {
        last ->next=third;
    }
    else
    {
        last->next=second;
    }
    
 }
 
friend LinkedList operator+(LinkedList a, LinkedList b);
};
// operator overloading for adding two linkedList
LinkedList operator+ (LinkedList a, LinkedList b)
{   
    LinkedList temp;

     
    Node *p= a.first;
    temp.first=a.first;
    Node *second = b.first;

    while (p !=nullptr)
    {
        p=p->next;
    }
    p->next=second;
    return temp;
}

int main()
{   int n=5;

    int arr[n]={1,2,3,4,5};
    int arr2[n]={6,7,8,9,10};
    // LinkedList a(arr ,n);
    // LinkedList b(arr2, n);
    LinkedList a(arr , n, true);
    if(a.Isloop())
    {
        cout<<"Have Loop"<<endl;
    }
    else
        cout<<"Not exist";
    // a.Display();
 

  
}