#include<stdio.h>

struct array
{
    int A[10];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    for ( i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
    
}

void Insert(struct array * arr , int index , int x)
{
    int i;
    if (index > 0 && index <arr->length)
    {
        for ( i = arr->length; i > index; i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
        
    }
    
}
void append(struct array *arr, int x)
{
    if(arr->length<arr->size)
        {
            arr->A[arr->length]=x;
            arr->length++;
        } 
            
}
int Delete(struct array *arr, int index)
{
    int x=arr->A[index];
    int i;
    if (index >0 && index < arr->length)
    {
    for (i = index; i < arr->length; i++)
    {
        arr->A[i]=arr->A[i+1];
    }
    arr->length--;
    return x;    
    }
}
int get(struct array *arr , int index)
{
    return arr->A[index];
}
void set(struct array *arr , int index , int x)
{
    arr->A[index]=x;
}

int main()
{
 struct array arr = {{1,2,3,4,5},10,5};
   
   //adding a element at the end
    append(&arr,10);
    display(arr);
    printf("\n");
    // inserting an element  at given index
    Insert(&arr, 3 , 15);
    display(arr);
    printf("\n");
    //deleting the element at given index
   printf("%d\n", Delete(&arr, 2));
    display(arr);
    printf("\n");
   printf("%d\n", get(&arr , 3));
   set(&arr , 1, 18);
   display(arr);

}