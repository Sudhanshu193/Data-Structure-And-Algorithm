#include<iostream>
using namespace std;
struct stack{
    int size;
    int top;
    int *s;
};
void push(stack *st , int x)
 {
    if(st->top==st->size-1)
        cout<<"stack is full"<<endl;
    else
    {
        st->top++;
        st->s[st->top]=x;
    }    
 }

 int pop(stack *st)
 {
    int x=-1;
    if(st->top==-1)
        cout<<"stack is empty";
    else
    {
        x=st->s[st->top];
        st->top--;
    }
    return x;        
 }
int main()
{
   struct stack st;
   cout <<"enter the size:"<<endl;
   cin>>st.size;
    st.top=-1;
    st.s=new int(st.size);
    // push(&st , 5);
    // push(&st, 6);
    // push(&st, 3);
    // push(&st, 8);
    int x;
    for(int i=0; i< st.size; i++)
    {
        cin>>x;
        push(&st, x);

    }
    cout<<"Pop element is: "<<pop(&st);

    cout<<"\ntop element : " <<st.s[st.top];
}
