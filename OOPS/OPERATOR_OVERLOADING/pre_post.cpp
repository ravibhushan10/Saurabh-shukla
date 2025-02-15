#include<iostream>
class integer
{
    int a;
    public:
    
    integer()
    {
       
    }
    integer(int x)
    {
        a=x;
    }
    void showdata()
    {
        std ::cout<<a<<std ::endl;
    }
    // pre increament
    integer  operator ++()
    {
        integer temp;
        temp.a= ++a;
        return temp;

    }
    // post increament
    integer  operator ++( int)
    {
        integer temp;
        temp.a= a++;
        return temp;

    }
};
int main(void)
{
    integer i1(10),i2,i3(20),i4;
    i1.showdata();
//    i2=i1.operator++();
     i2=++i1;
   i2.showdata();

   i4=i3++;
   i3.showdata();
   i4.showdata();
   return 0;
}