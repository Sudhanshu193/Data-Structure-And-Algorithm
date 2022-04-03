#include<iostream>
using namespace std;

class circle
{
    private:
    int radius;
    float pi;

    public:
    circle(int r , float p)
    {
        radius = r;
        pi = p;
    }
  float area()
  {
      return pi*radius*radius;
  }
  void change(int r)
  {
      radius=r;
  }
};
int main()
{
  circle c(5 , 3.14);
  cout<<"Area of circle: "<<c.area();
  c.change(20);

}