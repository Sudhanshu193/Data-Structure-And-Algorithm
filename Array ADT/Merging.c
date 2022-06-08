#include<stdio.h>
int main()
{
    int A[5]={3,8,16,20,25};
    int B[5]={4,10,12,22,23};
    int C[15]={};
    int i=0;
    int j =0;
    int k =0;
    int m, n;
    while(i<m && j<n)
    {
        if(A[i]<B[j])
            C[k++]=A[i++];
        else
            C[k++]=B[j++];

     for (; i < m; i++)
        {
            C[k++]=A[i];
        }
     
     for (; j < n; j++)
        {
            C[k++]=B[j];
        }      
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", C[i]);
    }
    
    
}