#include<iostream>
using namespace std;
void InsertionSort(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int value=a[i];
        int hole =i;
        while (hole>0 && a[hole-1] > a[hole])
        {
            a[hole]=a[hole-1];
            hole=hole-1;
        }
        a[hole]=value;

    }
    
}
int main()
{
    int n=6;
    int arr[]={2,4,3,5,8,6};
    InsertionSort(arr , n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
