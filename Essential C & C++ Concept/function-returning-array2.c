#include<stdio.h>
#include<stdlib.h>

int* fun(int n)
{
    int *p;
    p=(int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++ )
    {
        scanf("%d",&p[i]);
    }
    return p;
}

int main()
{
 int *A;
  A=fun(5);
  for (int i = 0; i < 5; i++)
  {
      printf("%d", A[i]);
  }
  return 0;
}