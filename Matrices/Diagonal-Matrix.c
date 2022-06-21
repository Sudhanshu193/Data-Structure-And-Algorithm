#include<stdio.h>

struct DiagonalMatrix
{
    int A[10];
    int n;
};
void set(struct DiagonalMatrix *m , int i , int j, int element )
{
    if (i==j)
    {
        m->A[i-1]=element;
    }   
}
int get(struct DiagonalMatrix m, int i, int j)
{
    if (i == j)
        return m.A[i-1];
    else
        return 0;  
}
void Display(struct DiagonalMatrix m)
{
    int i , j;
    for (int i = 0; i < m.n; i++)
    {
        for (int j = 0; j < m.n; j++)
        {
            if(i==j)
                {
                    printf("%d ", m.A[i]);
                }
                else
                    printf("0 ");
        }
        printf("\n");
    }
    
}

int main()
{
  struct DiagonalMatrix x; 
  x.n=4;
   set(&x ,1,1,2); set(&x , 2,2,3); set(&x ,3,3,4); set(&x,4,4,5);
    Display(x);

    return 0;

}