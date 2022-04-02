#include<stdio.h>
//pass by value
 void swap(int a , int b)
{
    int temp;
    temp = a;
    a = b;
    b =  temp;  
}
//pass by reference
// void swap(int *a , int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b =  temp;  
// }
// void swap(int &a , int &b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b =  temp;  
// }
int main()
{
 int x , y;
 x = 10, y = 20;
 swap( x , y);
// swap(&x ,&y);
 printf("%d %d", x,y);

}