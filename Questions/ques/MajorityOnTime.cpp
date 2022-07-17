#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={2,2,1,1,1,2,2};
    int n =sizeof(arr)/sizeof(arr[0]);
    int i=0;
    sort(arr, arr+n);
    
    
    int maxcount=0;
    int index;
    while(i<n)
    { int count=0;
        while (arr[i]==arr[i+1])
        {
            count++;
            i++;
        }
       // cout<< count<<endl;
        if (maxcount <count)
        {
            maxcount=count;

            //cout<<maxcount;
            index = i;
        }
        i++;    
    }
    if (maxcount>n/2)
    {
        cout<<arr[index];
    }
    

}
