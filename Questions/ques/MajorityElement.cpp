#include<iostream>
using namespace std;
int main()
{
  int arr[]={2,2,1,1,1,2,2};
  int n = sizeof(arr)/sizeof(arr[0]);
  //cout<<n/2;
  for(int i=0; i<n; i++)
  {
    int count =0;
    for (int j = 0; j < n; j++)
    {
        if(arr[i]==arr[j])
        {
            count++;
        }
    }
    if(count > n/2)
    {
        cout<<" "<<arr[i];

    }
  }
}
