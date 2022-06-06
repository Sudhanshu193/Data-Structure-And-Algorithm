#include<iostream>
using namespace std;
int binarySearch(int arr[], int l , int h, int key)
{
    while (l <= h)
    {
        int mid = (l+h)/2;

        if (key == arr[mid])
            return mid;
        else if(key < arr[mid])
            h = mid - 1;
        else
            l = mid + 1;       
        
    }
    return -1;    
}
// Using Recursion
int RbinarySearch(int arr[], int l , int h, int key)
{
    if(l <= h)
    {
        int mid = (l+h)/2;

    if (key == arr[mid])
        return mid;
    else if(key < arr[mid])
            return RbinarySearch(arr , l , mid -1, key);
        else
            return RbinarySearch(arr, mid +1, h, key);     
        
    }
    return -1;    
}
int main()
{
 int arr[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
 int low =0;
 int high =14;
 int key = 12;
 cout <<"Binary Search using loop"<<endl;
 cout <<binarySearch(arr , low,high, key)<<endl;
 cout <<"Binary Search using Recurssion"<<endl;
 cout <<RbinarySearch(arr , low,high, 10);
}
