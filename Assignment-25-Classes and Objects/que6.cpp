#include<iostream>
using namespace std;

class Square
{
   int n;
   int square;
   static int count;
   public:
   void setNumber(int x)
   {
    n=x;
   }
   int getSquare()
   {
    return square;
   }
   void CalcuSquare()
   {
    square=n*n;
    count++;
   }
   static int getCount()
   {
    return count;
   }
};

int Square::count=0;

int main()
{
    system("cls");
    Square s1;
    s1.setNumber(4);
    s1.CalcuSquare();
    cout<<s1.getSquare()<<"k= "<<Square::getCount()<<endl;
    s1.CalcuSquare();
    
    cout<<s1.getSquare()<<"k= "<<Square::getCount()<<endl;

    return 0;
}


