#include<iostream>
class Complex
{
    int a,b;
   friend Complex operator -(Complex );
    public:
    Complex()
    {

    }
    Complex(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void showdata()
    {
        std ::cout<<a<<" "<<b<<std ::endl;
    }
   

};

Complex operator-(Complex r)
{
    Complex temp;
    temp.a=-(r.a);
    temp.b=-(r.b);
    return temp;
}

int main(void)
{
   
    Complex c1(3,5),c2;

    c2=operator-(c1); /* c2=-c1  ; you can write in this way*/
    
    c2.showdata();
    

  

 
   return 0;
}