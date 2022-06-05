#include<iostream>
using namespace std;
int main() // unsolved yet.
{
    int lines = 8;
    int i ,j;
    for ( i = 1; i < lines; i++)
    {
        for ( j = 1; j <= lines/2; j++)
        {
            if(i == j)
            {
                cout <<"*";
            }
            else if(i >4 && j == lines -i)
            {
                cout <<"*";
            }
            else
                cout <<" ";
        }
        cout <<endl;
    }
}
