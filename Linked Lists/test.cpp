#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;

    cin >> n;
    int original;
    original=n;
  
//  reverse(n.begin() , n.end());// function for reverse
//  cout<<n;
int rem; 
int rev=0;
while(n!=0)
{
    rem=n%10;
    rev=rev*10 + rem;
    n=n/10;


}
if(original == rev)
{
    cout<< "It is palimdrome";
}
else
    cout <<"It is not palimdrome";
//cout <<rev;


 


}
