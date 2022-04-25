#include<iostream>
#include<string>
using namespace std;
int main()
{
   int i;
   string s;
   string b="";
   cout <<"Enter the String:"<<endl;
   getline(cin, s);
   //cin >>s;
   for ( i = s.length(); i >= 0; i--)
   {
       b=b+s[i];
//method 1
       //cout <<s[i];

   }
   // method 2
   cout << b;
}
