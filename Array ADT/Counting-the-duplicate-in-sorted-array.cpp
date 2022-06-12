#include<iostream>
using namespace std;
int main()
{    
    int A[10]={3,6,8,8,12,12,15,15,15,20};
    int n =10;
    int j;

    for (int i = 0; i <n -1 ; i++)
    {
      if (A[i]==A[i+1])
      {
        j = i+1;
      
         while (A[i]== A[j])
        {
           j++;
        }
        cout<<A[i]<<" is  the element appering "<<j-i<<" time"<<endl;
        i =j -1;
      }  
    }
    
}
