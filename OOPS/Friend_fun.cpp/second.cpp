#include<iostream>
class B;
// formal decleration of class
class A
{
    int a;
   friend void fun(A,B);    /*You can decleare  a friend function in private,protected,public because it is not a member of any class it is just a friend*/
    public:
    void setdata(int x)
    {
        a=x;
    }
};
class B
{
    int b;
    public:
    void setdata(int x)
    {
        b=x;
    }
   friend void fun(A,B);
};
void fun(A o1, B o2)
{
   std ::cout<<"The sum is:"<<o1.a+o2.b;
}
int main(void)
{
    A obj1;
    B obj2;

    obj1.setdata(3);
    obj2.setdata(5);

    fun(obj1,obj2);
   return 0;
}