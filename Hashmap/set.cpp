#include<iostream>
#include<set>
using namespace std;

int main()
{
    int count1=0;
    int count2=0;
    int count0=0;
    int arr[]={1,0,1,1,0,0,2,1,1,2,1,2,1};
     int n= sizeof(arr)/sizeof(arr[0]);
     //tp print set in decreasing order you have to make set<int>set1-> set<int, greater<int>>set1(arr, arr+n)
    set<int>set1(arr, arr+n);
    set<int>::iterator it;
    for(auto it=set1.begin(); it !=set1.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(int it=0 ; it<set1.size(); it++)
    {
        if(arr[it]== 0)
            count0++;
        else if(arr[it] == 1)
            count1++;
        else
            count2++;        
    }
    cout<<count0<<endl;
    cout<<count1<<endl;
    cout<<count2<<endl;
    
}