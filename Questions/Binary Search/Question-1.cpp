#include<iostream>
using namespace std;
int linear_search(int arr[], int key)
{
  int index =-1;
  
  for (int i = 0; i < 10; i++)
  {
      if (key == arr[i])
      {
          index = i;
          break;
      } 
  }

 return index;
}
int linear_search_1(int arr[], int key)
{
    int last = -1;
 for (int j = 0; j < 10; j++) // here we can ittrate array from back to so it will take less time(j=10-1; j>=0 ; j--)
{
    if (key == arr[j])
    {
        last = j;
    }
    
}
return last;
}
int main()
{
  int arr[10] = {1,1,2,2,2,2,2,4,4,5};
  int key = 2;
  cout<<"First occurence at index:  "<<linear_search(arr , key)<<endl;
  cout<<"last occurence at index: "<<linear_search_1(arr , key);
}
