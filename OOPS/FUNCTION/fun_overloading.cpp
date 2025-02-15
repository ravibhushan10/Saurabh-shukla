#include<iostream>
#define PI 3.14
float area(int ,int);
float area(int );
int main(void)
{
    int r;
    std ::cout<<"Enter the radius of circle:";
    std ::cin>>r;

// ealry binding or static binding= function call par kon si function bind hoga ye compiler decide karega compile time par argument ke basis par                               
    std ::cout<<"The area of a circle is:"<<area(r);

    int l,b;
    std ::cout<<"\nEnter the length and breadth of a rectangle:";
    std ::cin>>l>>b;

    std ::cout<<"The area of a rectangel is:"<<area(l,b);

   return 0;
}
float area(int a,int b)
{
    return (a*b);
}
float area(int a)
{
    return (a*a*PI);
}