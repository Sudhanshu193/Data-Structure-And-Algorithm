#include<iostream>
using namespace std;
class matrix
{
    private:
    int *A;
    int n;
     public:
     matrix(int n)
     {
        this->n=n;
        A = new int[n];

     }
     void set(int i , int j, int element)
     {
        if(i>=j)
            A[i*(i-1)/2 + j-1]= element;

     }
     int get(int i , int j)
     {
        if(i>=j)
        {
            return A[i*(i-1)/2 + j-1];
        }
        else
            return 0;
     }
     void display()
     {
        int i ,j;
        
        for ( i = 1; i <= n; i++)
        {
            for ( j = 1; j <= n; j++)
            {
                if(i>=j)
                     cout<<" "<<A[i*(i-1)/2 + j-1];
                else
                    cout<<" 0";

            }
          cout <<endl;  
        }
        
     }
};

int main()
{
 matrix m(5);

    m.set(1,1,5);
    m.set(2,2,6);
    m.set(3,3,5);
    m.set(4,4,8);
    m.set(5,5,9);
    m.set(2,1,5);
    m.set(3,1,5);
    m.set(3,2,5);
    m.set(4,1,5);
    m.set(4,2,5);
    m.set(4,3,5);
    m.set(5,1,3);
    m.set(5,2,3);
    m.set(5,3,8);
    m.set(5,4,5);

    m.display();





}
