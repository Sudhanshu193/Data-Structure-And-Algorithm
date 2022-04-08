#include<iostream>
using namespace std;
class Matrix
{   
    int row;
    int col;
   

    public:
        int **arr;
        Matrix(int r, int c)
        {
            // this->arr = new int[r*c];
            row=r;
            col=c;
            arr = new int*[row]; 
         for (int i = 0; i < row; ++i)
            {
                arr[i] = new int[col];
                for (int j = 0; j < col; ++j)
                    {
                        arr[i][j] = 0;
                    }
            }
        }

        void accept()
        {
            cout<<"Enter the matrix element: ";
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    cin >>arr[i][j];
                }   
            }
        }

        void display()
        {
            cout<<"Matrix is: "<<endl;
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    cout <<arr[i][j]<<" ";
                }
                cout <<endl;
            }
            
        } 
        void add(Matrix m1, Matrix m2)
        {
            // Matrix temp(3,3);
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    arr[i][j] = m1.arr[i][j] + m2.arr[i][j];
                    // return temp;
                }
                
            }
        }
};
// void Matrix::operator+(Matrix m1, Matrix m2)
// {
// }
int main()
{
    Matrix m1(3,3), m2(3,3),m3(3,3);
    m1.accept();
    m1.display();
    m2.accept();
    m2.display();
    m3.add(m1, m2);
    m3.display();
}
