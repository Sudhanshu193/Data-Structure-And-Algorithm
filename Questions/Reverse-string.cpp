#include<iostream>
#include<string>
using namespace std;
int main()
{
   int i;
   string s;
   cout <<"Enter the String:"<<endl;
   getline(cin, s);
   //cin >>s;
   for ( i = s.length(); i >= 0; i--)
   {
       cout <<s[i];
   }
   
}
