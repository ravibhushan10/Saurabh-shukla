#include<iostream>
class integer
{
    private:
    int a,b;
    public:
    integer()
    {

    }
    integer (int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void showdata()
    {
        std ::cout<<"a="<<a<<" "<<"b="<<b<<std ::endl;
    }
    friend int sum(integer);

};
int sum(integer r)
{
    
    return (r.a+r.b);
}

int main(void)
{
    integer i1,i2;
    i1=integer(2,4);

  std :: cout<<"The sum is:"<< sum(i1);
   
    
   return 0;
}