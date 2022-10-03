#include<iostream>
using namespace std;

class Area
{
   int length,breadth,radius,side,area;
   public:
   void setSide(int x)
   {
    side=x;
   }
   void setLengBre(int x,int y)
   {
    length=x; breadth=y;
   } void setRadius(int r)
   {
    radius=r;
   }
   float areaOfSquare()
   {
    return side*side;
   }
   float areaOfRectangle()
   {
       return length*breadth;
   }
   float areaofCircle()
   {
      return 3.14*radius*radius;
   }
   
};

int main()
{
    system("cls");
    Area a;
    a.setSide(5);
    a.setRadius(5);
    a.setLengBre(2,4);
     cout<<"Area of Square is : "<<a.areaOfSquare()<<endl;
     cout<<"Area of Circle is : "<<a.areaofCircle()<<endl;
     cout<<"Area of Rectangle is : "<<a.areaOfRectangle()<<endl;
    return 0;
}