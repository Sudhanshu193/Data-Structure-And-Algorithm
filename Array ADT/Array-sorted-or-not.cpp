#include<iostream>
using namespace std;
void swap(int *a , int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void Display(int A[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        cout <<" "<<A[i];
    }
    
}
void DoSort(int A[], int n)
{
    for (int i = 0; i < n -1; i++)
    {
        if (A[i] > A[i + 1])
        {
            swap(&A[i], &A[i +1]);

        }
        
    } 
}
int Issorted(int A[], int n)
{
    for (int i = 0; i < n -1; i++)
    {
        if (A[i] > A[i + 1])
        {
            return false;

        } 
    } 
    return true;
}
int main()
{
    int A[8]={4,8,12,16,26,20,22,24};
    int n = 8;
   cout <<"Is Array Sorted : "<<Issorted(A, n)<<endl;
   Display(A , n);
   cout <<endl;
   cout <<"Sorted Array is :"<<endl;
   DoSort(A, n);
    Display(A , n);

}
