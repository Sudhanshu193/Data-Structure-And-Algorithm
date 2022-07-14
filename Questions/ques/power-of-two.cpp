#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void value2(double d)
{
 float a = log2(d);
 cout <<a<<endl;
    if(a ==(int) a)
        cout <<"True";
    else
        cout <<"False";

}
int main()
{ double n;
    cout <<"enter input n"<<endl;
    cin >>n;
    value2(n);
}