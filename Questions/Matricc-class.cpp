#include<iostream>
using namespace std;
class Matrix
{   
    int row;
    int col;
    int **arr;

    public:
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
};
int main()
{
    Matrix m1(3,3);
    m1.accept();
    m1.display();

}
