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
        cout <<"The element are : ";
        for ( i = 0; i < length; i++)
        {
          cout<<" "<<A[i];
        }
        
    }

};
int main()
{
  array arr;
  int n ,i;
  cout <<"Enter the size of array:"<<endl;
  cin >>arr.size;
  arr.length=0;
   
    arr.A=new int[arr.size];

  cout<<"Enter the number of element"<<endl;
  cin >>n;
  arr.length=n;
  cout <<"Enter the elements:"<<endl;
  for ( i = 0; i < n; i++)
  {
      cin >>arr.A[i];
  }
   
 arr.dispaly();
  

  
}
