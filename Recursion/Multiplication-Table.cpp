#include<iostream>
using namespace std;

void Table(int N, int i)
{
    if (i>10)
    {
        return ;
    }
    cout <<N << "*"<<i <<"="<<N*i<<endl;
    return Table(N, i+1);
    
}
int main()
{
int N,i;
cout << "Enter Number: "<<endl;
cin >>N;

Table(N,1);
}
