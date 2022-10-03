#include<iostream>
using namespace std;

class Rectangle
{
   private:
   int length,width,area;
   public:
   void setLB(int l,int w)
   {
    length=l;
    width=w;
   }

   void calArea()
   {
    area=length*width;

   }

   int getArea()
   {
     return area;
   }

};

int main()
{
    Rectangle r;
    r.setLB(2,4);
    r.calArea();
    cout<<r.getArea()<<endl;
    return 0;
}