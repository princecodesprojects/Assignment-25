#include<iostream>
using namespace std;

class LargeNumber
{
   private:
   int a,b,c,larg;
   public:
   void setNumber(int x,int y,int z)
   {
    a=x;
    b=y;
    c=z;
   }
   int getA()
   {
    return a;
   }
   int getB()
   {
    return b;
   }
   int getC()
   {
    return c;
   }

   int getLargest()
   {
    return larg;
   }

   void calculateLargest()
   {
    if(a>b)
    {
        if(a>c)
        larg=a;
        else
        larg=c;
    }
    else 
    larg=b;
   }

};

int main()
{
    system("cls");
    LargeNumber l;
    l.setNumber(4,1,1);
    l.calculateLargest();
    cout<<"Large number between "<<l.getA()<<" "<<l.getB()<<" "<<l.getC()<<" "<<" is "<<l.getLargest();
    return 0;
}