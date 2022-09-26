#include<iostream>
#include<stack>

using namespace std;
int main()
{
stack<int>st;

st.push(30);
st.push(40);
st.push(23);
st.pop();
cout<<st.top();
}
