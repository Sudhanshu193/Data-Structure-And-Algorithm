#include<stdio.h>
int main()
{
    int A[11]={6,7,8,9,11,12,15,16,17,18,19};
    int low = 6;
    int high = 19;
    int n =11;
    int difference = low-0;
    for (int i = 0; i < n; i++)
    {
        if (A[i]-i != difference)
        {
            while (difference < A[i]-i)
            {
                printf("The missing element is : %d\n", i+difference);
               
                difference++;

            }
            
        }
        
    }
    

}