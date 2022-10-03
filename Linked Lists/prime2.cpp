#include<iostream>
using namespace std;
bool prime(int a)
{
    for (int i = 2;  i < a; i++)
    {
        if ( a%i == 0)
        {
            return false;
        }  
    }
    return true;
}
int main()
{
    int x, y,i;
    cin >>x>>y;
for(i =x; i<=y; i++)
   {
        if(prime(i))
            cout << i<<" ";
       
   }       
}

