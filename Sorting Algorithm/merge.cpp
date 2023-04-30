#include<iostream>
#include<stdlib.h>
using namespace std;
void marge(int *arr, int *left, int leftCount, int *right, int rightCount)
{
    int i=0;
    int j=0;
    int k=0;
    while (i<leftCount && j<rightCount)
    {
        if(left[i]<right[j])
        {
            arr[k++]=left[i++];
        }
        else
        {
            arr[k++]=right[j++];
        }
        
    }
    while(i<leftCount)
    {
        arr[k++]=left[i++];
    }

    while (j<rightCount)
    {
        arr[k++]=right[j++];
    }
    
    
}
 void margeSort(int *arr, int n)
 {
    int mid;
    int *left;
    int *right;
    int i;

    if(n<2);
      return;

    mid=n/2;

    // left=(int*)malloc(mid*sizeof(int));
    // right=(int*)malloc((n-mid)*sizeof(int));
    left=new int(mid);
    right=new int(n-mid);
    for(i=0; i<mid; i++)
    {
        left[i]=arr[i];

    }
    for(i=mid; i<n; i++)
    {
        right[i-mid]=arr[i]; 
    }

    margeSort(left, mid);
    margeSort(right, n-mid);
    marge(arr, left, mid, right, n-mid);
    free(left);
    free(right);

 }
int main()
{
int arr[]={2,5,3,4,7,6,9,8};
int n =sizeof(arr)/sizeof(arr[0]);


 margeSort(arr, n);

for(int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}
