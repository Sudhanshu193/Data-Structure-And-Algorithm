#include<stdio.h>
struct Linear
{
    int a[10];
    int length;
    int size;
};
void display(struct Linear r)
{
for (int i = 0; i < r.length; i++)
{
    printf("%d ", r.a[i]);
}
}
void swap(int *a , int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}
int linearSearch(struct Linear r, int key)
 {
    for (int i = 0; i < r.length; i++)
    {
        if (key == r.a[i])
        {
            return i+1;
        }  
    } 
    return -1;   
 }
 // Methods for immproving linear search
 // 1st- Transpostion
 int linearSearch1(struct Linear *r, int key)
 {
    for (int i = 0; i < r->length; i++)
    {
        if (key == r->a[i])
        {
            swap(&r->a[i], &r->a[i-1]);
            return i+1;
        } 
    } 
    return -1;   
 }
 //Second method is Move to head
 int linearSearch2(struct Linear *r, int key)
 {
    for (int i = 0; i < r->length; i++)
    {
        if (key == r->a[i])
        {
            swap(&r->a[i], &r->a[0]);
            return i+1;
        } 
    } 
    return -1;   
 }

int main()
{
 struct Linear r = {{5,3,6,7,8,9}, 6, 10};
    printf("key is found at :%d\n" ,linearSearch(r ,6));
    printf("key is found at :%d\n" ,linearSearch1(&r ,8));
    printf("key is found at :%d\n" ,linearSearch2(&r ,9));
    display(r);


}