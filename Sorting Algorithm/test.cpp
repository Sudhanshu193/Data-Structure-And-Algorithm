#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,14,6,180,10};
    int max=A[0];
    int min=A[0];
    for(int i=0;i<5;i++)
    {
        if(max<A[i])
        {
            max=A[i];
        }
        else if(min>A[i])
        {
            min=A[i];
        }
        else
        cout<<"Not found"<<endl; 
    }
    cout<<max<<endl;
    cout<<min;
}
