#include<iostream>
using namespace std;
struct Node
{

    int data;
    struct Node * next;

}*top=nullptr;

void push(int x)
{
    Node* t=new Node;
    if(t==nullptr)
        cout<<"Stack overflow";
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

int pop()
{
    int x =-1;
    if(top==nullptr)
        cout<<"Stack is empty";
    else
    {
        Node *t=top;
        top=top->next;
        x=t->data;
        free (t);
    }    
}
int peek(int pos)
{
    Node*p=top;
    for(int i=0; p!=nullptr && i<pos-1; i++)
    {
        p=p->next;
    }
    if(p)
        return p->data;
    else
        return -1;    

}

int stackTop()
{
    if(top!=nullptr)
        return top->data;
}

int isEmpty()
{
    if (top==nullptr)
        return 1;   
}
bool isFulls()
{
    Node*t=new Node;
    if(t==nullptr)
        return 1;
    return 0;    
}
int main()
{
    int a[]={1,4,5,8,9};
    int n =sizeof(a)/sizeof(a[0]);
    for (int i = 0; i <n ; i++)
    {
        push(a[i]);
    }

    cout<<"Top element: "<<top->data<<endl;
   // pop();
   // cout<<top->data
   //Displaying every element in array
for(int i=1; i<=n; i++)
    cout<<peek(i)<<endl;
    
}
