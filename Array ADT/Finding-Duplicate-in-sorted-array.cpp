#include<iostream>
using namespace std;
int main()
{
    int A[10]={3,6,8,8,12,12,15,15,15,20};
    int duplicate =0;
    cout <<"The duplicates are:";
    for (int  i = 0; i < 10; i++)
    {
        
        if (A[i]==A[i+1] && A[i]!= duplicate)
        {
            cout <<" "<<A[i];
            duplicate=A[i];
        }
        
    }
    
}
