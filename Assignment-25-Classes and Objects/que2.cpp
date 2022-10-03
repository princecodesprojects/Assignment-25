#include<iostream>
using namespace std;

class Time
{
   private:
   int hour,minut,second;
   public:
   void set(int a,int b,int c)
   {
    hour=a;
    minut=b;
    second=c;
   }
   void print()
   {
    cout<<hour<<" hr "<<minut<<" min "<<second<<" sec "<<endl;
   } 
   void normalize()
   {
    minut=minut+second/60;
    second=second%60;
    hour=hour+minut/60;
    minut=minut%60;
   }
};

int main()
{
    Time t1,t2;

    t1.set(3,65,56);
     t1.normalize();
    t1.print();
    return 0;
}