#include<iostream>
class Complex
{
    int a,b;
    public:
    Complex()
    {}
    Complex(int x,int y)
    {
        a=x; b=y;
    }
    void showdata()
    {
        std ::cout<<a<<" "<<b<<std ::endl;
    }
    // unary operator overloading
    Complex  operator -  ()
    {
       Complex temp;
       temp.a=-a;
       temp.b=-b;
       return temp;
    }
};
int main(void)
{
    Complex c1(4,5),c2(5,6),c3,c4;
    c3=c1.operator-();
    c4=c2.operator-();
    
   c3.showdata();
   c4.showdata();
   return 0;
}