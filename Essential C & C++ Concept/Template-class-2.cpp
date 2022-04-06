#include<iostream>
using namespace std;
template<class T>
class add
{
private:
    T a;
    T b;
public:
  add(T  a, T b);
 T sum();

};
template<class T>
add<T>::add(T a , T b)
{
   this->a =a;
   this->b =b;
}
template<class T>
T add<T>::sum()
{
    return a+b;
}
int main()
{
 add<int>c(10, 4);
 add <string>c1("hi","bye");
 cout<<c.sum()<<endl;
 cout<<c1.sum()<<endl;
}
