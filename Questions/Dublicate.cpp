#include<iostream>
using namespace std;
int main()
{
  int arr[5]={2,4,8,2,3};
  int count=0;
  int max= -1;
  int index=-1;
  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
     if(arr[i]==arr[j])
     {
         count++;    
     }      
    }
    if (count>max)
    {
       max = count;
       index=i; 
    }

    count = 0;
        
  }
  cout<< "Element: "<<max<<endl;
  cout<< "Index:"<<index<<endl;

  

}
