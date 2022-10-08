#include<iostream>
using namespace std;
int main()
{
    int i, j;
    int  n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int arr[n+1]={0};
    for ( i = 1; i <=5; i++)
    {
        for ( j = i; j<n+1; j=j+i)
        {
            if(arr[j]==0)
               {
                arr[j]=1;
               }
               else
              {  
                arr[j]=0;
              }  
              //cout<<arr[j]<<" ";       
        } 
    }
    int count0=0;
    int count1=0;
    for(i=1; i<n+1; i++)
    {
        if(arr[i]==0)
            count0++;
        else
            count1++;    
    }

    cout<<"close are: "<<count0<<endl;
    cout<<"open are: "<<count1<<endl;
    

}
