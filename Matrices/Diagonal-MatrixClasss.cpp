#include<iostream>
using namespace std;

class Matrix
{
    private:
        int n;
        int *A;
    public:
        Matrix(int n)
        {
            this->n=n;
            A= new int[n];
        }  
        void set(int i, int j, int element);
        int get(int i, int j);
        void display();
        ~Matrix();  
};

void Matrix ::set(int i, int j , int element)
{
    if (i == j)
    {
        A[i-1]=element;
    }   
}

int Matrix::get(int i, int j)
{
    if (i == j)
    {
        return A[i-1];
    }
    else 
        return 0;   
}
void Matrix ::display()
{
    int i ,j;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout<<A[i]<<" ";
            }
            else
                cout<<"0 " ; 
        }
       cout<<endl; 
    }   
}
Matrix::~Matrix()
{
    delete[]A;
}

int main()
{
 Matrix m(5);
 m.set(1,1,8); m.set(2,2,5); m.set(3,3,8); m.set(4,4,1); m.set(5,5,2);
 m.display();
 
}
