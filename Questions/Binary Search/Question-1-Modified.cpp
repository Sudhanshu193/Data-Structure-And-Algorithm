#include<iostream>
using namespace std;
int binary_search(int arr[], int key)
{    int l =0;
    int h=9 ;
    int index =-1;
    int mid;
    while(l<=h)
    { 
            mid = (l+h)/2;
        if(key == arr[mid])
        {
            index = mid;
            h= mid -1;
        }
        else if(key > arr[mid])
        {
            l = mid +1;
        }
        else
        {
            h = mid -1;
        }
    

    }
    return mid;


}
int main()
{
int arr[10]={1,1,2,2,2,2,2,4,4,6};
int key =2;
int result = binary_search(arr , key);
cout<<result;

}
