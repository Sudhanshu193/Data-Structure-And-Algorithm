#include<iostream>
using namespace std;
bool prime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a%i==0)
        {
            return false;
        }  
    }
    return true;
}
int main()
{
    int x;
    cin >>x;
cout << prime(x);
}
