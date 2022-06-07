#include<stdio.h>
#include<stdlib.h>
struct array
{
    int A[10];
    int size;
    int length;
};
void display(struct array arr)
{
    for (int i = 0; i <arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
    
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
//method 1 using oxilary array
int Reverse1(struct array *arr)
{
    int *b;
    b = (int *)malloc(arr->length*sizeof(int));
    for (int i = arr->length-1, j =0; i>=0; i-- , j++)
    {
        b[j]= arr->A[i];
    }
    for (int i = 0; i < arr->length; i++)
    {
        arr->A[i]=b[i];
    }  
}
//method 2 swapping
int Reverse2(struct array *arr)
{
    for (int i = 0, j= arr->length-1; i <= j; i++, j--)
    {
        swap(&arr->A[i], &arr->A[j]);
    }
    
}

int main()
{
 struct array arr = {{22,3,4,6,10,5},10 ,6};
// Reverse1(&arr);
// display(arr);
printf("\n");
Reverse2(&arr);
display(arr);
}