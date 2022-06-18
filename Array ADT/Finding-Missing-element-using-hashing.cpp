#include<iostream>
using namespace std;
int main()
{
     int A[10]={2,3,5,7,8,6,10,12,15,16};
     int H[16]={0};
     int low =1;
     int high = 16;
     int n =10;

     for (int  i = 0; i < 10; i++)
     {
        H[A[i]]++;
     }
     for (int i = low; i < high; i++)
     {
        if (H[i]== 0)
        {
            cout <<i<<endl;
        }
     }
     
     
}
