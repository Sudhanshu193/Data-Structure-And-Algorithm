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
  

 public:
 int length;
  LinkedList()
  {
    first=nullptr;
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
};

int main()
{   int n=5;

    int arr[n]={1,2,3,4,5};
    LinkedList a(arr ,n);
    a.Display();
    cout<<endl;
    
   // a.insert(8);
   //a.insert(5, 2);
   //a.Display();
 //  cout<<endl;
   a.Delete(3);
  // a.recersiveDisplay();
   
   a.Display();
  // cout<< a.length;
   a.reverse();
   cout<<endl;
    a.Display();
}
