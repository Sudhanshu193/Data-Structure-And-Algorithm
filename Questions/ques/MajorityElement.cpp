#include<iostream>
using namespace std;
int main()
{
  int arr[]={2,2,1,1,1,2,2};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  int count;
  int maxCount=0;
  int index=-1;
  for(int i=0; i<n; i++)
  {
    count = 0;
    for (int j = 0; j < n; j++)
    {
        if(arr[i]==arr[j])
        {
            count++;

        }
    }
  if(maxCount<count)
  {
    maxCount=count;
    index=i;
  }
    
  }
  if(count > n/2)
    {
        cout<<" "<<arr[index];

    }
}
