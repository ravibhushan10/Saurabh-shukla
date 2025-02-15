// call by reference
#include<iostream>
int sum(int &,int &);
int main(void)
{
    int a=10,b=20;
    int s= sum(a,b);
    std ::cout<<"The sum is:"<<s;
   return 0;
}
// here refernce variables are passing in formal arguments so this is called call by reference
int sum(int &x,int &y)
{
    return (x + y);
}