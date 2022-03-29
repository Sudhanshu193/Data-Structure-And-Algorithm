#include<iostream>
using namespace std;
int fabo(int n)
{
    if(n > 2)
    {
        return fabo(n-1) +fabo(n-2);
    }
    else if (n==2)
    {
        return 1;
    }else
    {
        return 0;
    }
    
    
}
int main()
{
    int n;
    cout << "Enter the number you want fabonaci of : " <<endl;
    cin >> n;
   cout << fabo(n);

    return 0;
}