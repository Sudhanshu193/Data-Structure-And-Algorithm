#include<iostream>
using namespace std;
int prime(int x)
{ int count =0;
    for (int i = 1; i <=x; i++)
    {
       if (x%i==0)
       {
        count ++;
       }
        
    }
    return count;
    
}
int main()
{
 int x;
 cin>> x;
 int m=prime(x);

if(m == 2)
    cout<< "the number "<<x <<" is prime";
else
    cout <<"number is not prime";
}
