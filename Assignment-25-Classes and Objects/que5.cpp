#include<iostream>
using namespace std;

class ReverseNumber
{
    private:
    int number,reverse;
    public:
    void setNumber(int n)
    {
        number=n;
    }
    int getNumber()
    {
        return number;
    }
    int getReverse()
    {
        return reverse;
    }

    void calculateReverse()
    {
        while(number>0)
        {
           int x=number%10;
            cout<<x;
           number=number/10;
        }
        
    }
};


int main()
{
    ReverseNumber r;
    r.setNumber(234);
    r.calculateReverse();
    return 0;
}