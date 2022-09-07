#include<iostream>
#include<set>
using namespace std;

int main()
{
    
    int arr[]={1,3,2,5,4,8,7,6};
     int n= sizeof(arr)/sizeof(arr[0]);
     //tp print set in decreasing order you have to make set<int>set1-> set<int, greater<int>>set1(arr, arr+n)
    set<int,greater<int>>set1(arr, arr+n);
    set<int>::iterator it;
    for(auto it=set1.begin(); it !=set1.end(); it++)
    {
        cout<<*it<<" ";
    }
}