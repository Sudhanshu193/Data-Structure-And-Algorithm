#include<iostream>
using namespace std;
class array
{ 
    public:

    int *A;
    int size;
    int length;

    void dispaly()
    {
        int i;
        cout <<"The  element are : ";
        for ( i = 0; i < length; i++)
        {
          cout<<" "<<A[i];
    }
      
    }

};
int main()
{
  array ar;
  int n ,i;
  cout <<"Enter the size of array:"<<endl;
  cin >>ar.size;
  ar.length=0;
   
    ar.A=new int[ar.size];

  cout<<"Enter the number of element"<<endl;
  cin >>n;
  ar.length=n;
  cout <<"Enter the elements:"<<endl;
  for ( i = 0; i < n; i++)
  {
      cin >>ar.A[i];
  }
   
 ar.dispaly();
  

  
}
