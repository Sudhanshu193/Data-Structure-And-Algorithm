#include<iostream>
using namespace std;
template<class T>
class Arthmatic
{
private:
    T a;
    T b;
public:
    Arthmatic(T a , T b);
    T add();
    T sub();
};

template<class T>
Arthmatic<T>::Arthmatic(T a, T b)
{
  this->a=a;
  this->b=b;
}

template<class T>
T Arthmatic<T>::add()
{
    T c;
    c = a + b;
    return c; 
}template<class T>
T Arthmatic<T>::sub()
{
 T c;
 c = a - b;
 return c;
}
 
 int main()
 {
     Arthmatic<int> a(10,5);
      cout << a.add()<<endl;
      cout << a.sub()<<endl;
      Arthmatic<float> a1(15.5, 8.25);
      cout << a1.sub();
 }
