#include<iostream>
using namespace std;

class Factorial
{
   private:
   int n,fact;
   public:
   void setN(int x)
   {
    n=x;
   }
   int getN()
   {
    return n;
   }
   int getFactorial()
   {
    return fact;
   }

   void calculateFactorail()
   {

    if(n<=0)
    {
        fact=1;
        return;
    }
      int i,f=1;
      for(i=1;i<=n;i++)
      {
        f=f*i;
      }
      fact=f;
   }

};

int main()
{
    system("cls");
     Factorial f;
     f.setN(5);
     f.calculateFactorail();
     cout<<"Factorial of "<<f.getN()<<" is "<<f.getFactorial();
    return 0;
}