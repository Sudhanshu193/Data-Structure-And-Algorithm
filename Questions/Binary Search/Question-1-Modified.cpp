#include<iostream>
using namespace std;
int binary_search1(int arr[], int key)
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
            h= mid - 1;
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

int binary_search2(int arr[], int key)
{
    int l;
    int h;
    int mid;
    int l_index;
    while (l<=h)
    {
         mid= (l+h)/2;

        if (key == arr[mid])
        {
            l_index = mid;
            l = mid +1;
        }
        else if(key > arr[mid])
        {
            l = mid + 1;
        }
        else
            h = mid - 1;
        
        
    }
    return mid;
}
int main()
{
int arr[10]={1,1,2,2,2,2,2,4,4,6};
int key =2;
int result = binary_search1(arr , key);
cout<<"First occurence at index: "<<result;
cout<<" last occurence at index: "<<binary_search2(arr , key);

}
