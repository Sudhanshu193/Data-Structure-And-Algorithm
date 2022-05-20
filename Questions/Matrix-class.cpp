#include<iostream>
using namespace std;
class Matrix
{   
    int row;
    int col;
   

    public:
        int **arr;
        Matrix (int r, int c)
        {
            /// this->arr = new int[r*c];
            row=r;
            col=c;
            arr = new int*[row]; //Here we are creating memory in heap in row.
         for (int i = 0; i < row; ++i)
            {
                arr[i] = new int[col];
                for (int j = 0; j < col; ++j)
                    {
                        arr[i][j] = 0; // assigning every element = 0;
                    }
            }
        }
        //taking matrix
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
        //displaying matrix
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
        //Add function
        void add(Matrix m1, Matrix m2)
        {
            
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    arr[i][j] = m1.arr[i][j] + m2.arr[i][j];
                    
                }
                
            }
        }
        //substraction Function
         void sub(Matrix m1, Matrix m2)
        {
            
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    arr[i][j] = m1.arr[i][j] - m2.arr[i][j];
                    
                }
                
            }
        }
        //multiplication Function
         void multi(Matrix m1, Matrix m2)
        {
            
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    for (int k = 0; j < 3; j++)
                    {
                        arr[i][j]=0;
                        arr[i][j] += m1.arr[i][j] * m2.arr[i][j];
                    }   
                }  
            }
        }
};

int main()
{
    Matrix m1(3,3), m2(3,3),m3(3,3);
    m1.accept();
    m1.display();
    m2.accept();
    m2.display();
    m3.add(m1, m2);
    cout<<"Addition is : ";
    m3.display();
    m3.sub(m1, m2);
    cout <<"Substraction: ";
    m3.display();
    m3.multi(m1 , m2);
     cout << "Multiplication of: ";
    m3.display();
 }
