#include<iostream>
using namespace std;
int main()
{
  int arr[6]={2,4,4,4,4,2};
  int count=0;
  int max= -1;
  int index=-1;
  for(int i = 0; i < 6; i++)
  {
    for(int j = 0; j < 6; j++)
    {
     if(arr[i]==arr[j])
     {
         count++;    
     }      
    }
    if (count>max)
    {
       max = count;
       index =i; 
    }

    count = 0;
        
  }
  cout << "Number of time: "<<max<<endl;
  cout << "Element is: "<<arr[index]<<endl;
  cout << "Index:"<<index<<endl;
}
