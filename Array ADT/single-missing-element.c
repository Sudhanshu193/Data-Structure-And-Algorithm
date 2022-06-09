//Single missing element in sorted array. 
#include<stdio.h>
int main()
{
    int A[11]={1,2,3,4,5,6,8,9,10,11,12};
    int length =11;
    int sum =0;
    int n = 12;
    for (int  i = 0; i < length; i++)
    {
        sum=sum +A[i];
    }
    int s = (n*(n+1))/2;
    printf("The missing element is: %d ", s-sum);

return 0; 
}