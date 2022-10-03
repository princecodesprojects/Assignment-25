#include<iostream>
using namespace std;

class Circle
{
   private:
   int radius;
   float area;
   public:
   void setRadius(int x)
   {
    radius=x;
   }
   int getRadius()
   {
    return radius;
   }
   float getArea()
   {
    return area;
   }
   void calculateArea()
   {
    area=3.14*radius*radius;
   }
};

int main()
{
    Circle c;
    c.setRadius(5);
    c.calculateArea();
     cout<<"Circle with radius "<<c.getRadius()<<" area is "<<c.getArea();
    return 0;
}