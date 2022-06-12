#include<stdio.h>

int main()
{   //Finding the element whose sum is equal to k with o(n) time complexity;
    int A[10]={6,3,8,10,16,7,5,2,9,14};
    int n =10;
    int k =10;
    int h[16]={0};
    // for (int i = 0; i < n; i++)
    // {
    //    for (int j = i + 1; j < n; j++)
    //    {
    //      if(A[i]+A[j]==k)
    //     {
    //       printf("%d +%d = %d\n", A[i],A[j],k);
    //     }
    //    }
    // }
     for (int i = 0; i < n; i++)
    {
        if(h[k -A[i]]!=0)
        {
            printf("%d + %d = %d\n",A[i], k - A[i], k);
        }

        h[A[i]]++;
    }
}
