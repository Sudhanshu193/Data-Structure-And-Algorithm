#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,1,2,10,1};
    int n =sizeof(arr)/sizeof(arr[0]);
    
    int running[n];
    for (int i = 0; i < n; i++)
    {
        int sum =0;
        for (int j = i; j>=0; j--)
        {
           sum = sum +arr[j]; 
        }
        running[i]=sum;   
    }

    for (int x = 0; x < n; x++)
    {
        cout <<" "<<running[x];
    }
    


    
}
