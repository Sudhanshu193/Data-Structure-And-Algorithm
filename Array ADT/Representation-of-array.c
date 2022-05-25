#include<stdio.h>
#include<stdlib.h>
struct array
{
    int *A;
    int size;
    int length;
};
void Display(struct array arr)
{
    int i;
    printf("Element are: \n");
    for( i = 0; i < arr.length; i++)
    {
        printf("%d ",arr.A[i]);
    }
    
}

int main()
{   
    struct array arr;
    int n , i;
    
    printf("Enter the size of array\n");
    scanf("%d", &arr.size);

    arr.A=(int *)malloc(arr.size*sizeof(int));

    printf("Enter the number of element\n");
    scanf("%d",&n);
    
    printf("Enter the Element\n ");
    for ( i = 0; i < n; i++)
    {
      scanf("%d", &arr.A[i]);
    }

    arr.length=n;
 
    Display(arr);

}