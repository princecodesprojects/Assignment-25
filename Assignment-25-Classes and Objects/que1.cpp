#include<iostream>
using namespace std;

class Complex
{
  private:
  int real,imag;
  public:
  void set(int a,int b)
  {
    real=a;
    imag=b;
  }
  void print()
  {
    cout<<real<<" +"<<imag<<"i"<<endl;

  }
};

int main()
{
    Complex c1,c2;
    c1.set(2,4);
    c2.set(6,8);
    c1.print();
    c2.print();
    return 0;
}