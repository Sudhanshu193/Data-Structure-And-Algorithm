#include<iostream>
using namespace std;
int main()
{
  int A[10]={3,6,8,8,12,12,15,15,15,20};
  int high =20;
  int i;
  int H[high]={0};
  for ( i = 0; i < 10; i++)
  {
    H[A[i]]++;
  }
  for ( i = 0; i < high; i++)
  {
    if (H[i]>1)
    {
        cout <<"The duplicate is: "<<i<<" with "<<H[i]<<" time duplication"<<endl;
    }
    
  }
  
}
