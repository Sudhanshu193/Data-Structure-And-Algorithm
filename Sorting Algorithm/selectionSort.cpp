#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
for (int i = 0; i < n-1; i++)
{
    int imin=i;
    for(int j=i+1; j<n; j++)
    {
        if(arr[j]<arr[imin])
            imin=j;
    }
    int temp = arr[i];
    arr[i] = arr[imin];
    arr[imin] = temp;
}

}

int main()
{
    int n=6;
    int arr[]={2,7,4,10,5,3};
   cout<< "Before sorting"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
 selectionSort(arr , n);

 cout<<endl<<"After sorting"<<endl;
  for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}