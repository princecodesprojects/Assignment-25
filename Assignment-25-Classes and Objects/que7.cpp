#include<iostream>
using namespace std;

class Greatest
{
    private:
    int a,b,c,max;
    public:
    void setData(int x,int y,int z)
    {
        a=x; b=y; c=z;
    }
    void findMax()
    {
        if(a>b)
    {
        if(a>c)
        max=a;
        else
        max=c;
    }
    else 
    max=b;
    } 

    int getMax()
    {
      return max;
    }
};

int main()
{
    system("cls");
    Greatest g1;
    g1.setData(2,6,4);
    g1.findMax();
    cout<<g1.getMax()<<endl;
    return 0;
}