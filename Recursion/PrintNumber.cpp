#include<iostream>
using namespace std;
void fun(int n)
{
    if(n > 0)
    {
       fun(n-1);
      cout << " " <<n;
    //   fun(n-1);
    }
    else
    {
        cout <<" 0";
    }
    
}
int main()
{
    int n;
    cout << "Enter the number: " <<endl;
    cin >> n; 
    fun(n);
}