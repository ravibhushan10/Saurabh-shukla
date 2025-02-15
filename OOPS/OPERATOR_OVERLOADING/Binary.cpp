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
        std ::cout<<"The sum is:"<<a<<"+"<<b<<"i"<<std ::endl;
    }
    Complex  operator +  (Complex r)
    {
       Complex temp;
       temp.a= a+r.a;
       temp.b= b+r.b;
       return temp;
    }
};
int main(void)
{
    Complex c1(4,5),c2(5,6),c3;
    // c3=c1.operator+(c2);
    c3=c1+c2;
   c3.showdata();
   return 0;
}