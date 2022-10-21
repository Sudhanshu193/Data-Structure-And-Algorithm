#include<iostream>
using namespace std;
void insert(int arr[], int n)
{
    int temp, i=n;
    temp=arr[i];

    while(i>0 && temp>arr[i/2])
    {
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=temp;
}
int main()
{
int arr[]={2,5,17,11,40};
int i;
for ( i = 0; i <5; i++)
{
    insert(arr, i);
}
cout<< "The max heap is: "<<endl;
for(int j=0; j<5; j++)
{
    cout<<arr[j]<<" ";
}
}
