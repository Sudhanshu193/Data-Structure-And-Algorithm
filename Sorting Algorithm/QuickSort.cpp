#include<iostream>
using namespace std;
int partition(int*arr, int start, int end)
{
    int pivot = arr[end];
    int pindex= start;
    for(int i =start; i < end; i++)
    {
        if(arr[i]<= pivot)
        {
            swap(arr[i], arr[pindex]);
            pindex++;
        }
    }
    swap(arr[pindex], arr[end]);
    return pindex;


}
void QuickSort(int *arr, int start, int end)
{
    if(start < end)
    {
        int partitionIndex = partition(arr, start, end);
        QuickSort(arr, start, partitionIndex-1);
        QuickSort(arr, partitionIndex+1, end);
    }

}

int main()
{
    int n =8;
    int arr[n]={7,2,1,6,8,5,3,4};
    QuickSort(arr, 0, n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}