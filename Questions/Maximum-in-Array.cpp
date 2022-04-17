#include<iostream>
using namespace std;
int main()
{
   int arr[10]={10,1,2,4,53,7,45,6,9,11};
   int max=arr[0];
   for (int i = 1; i < 10; i++)
   {
       if (max <= arr[i])
       {
           max = arr[i];
       }
   }
   cout <<max;
   return 0;
}
