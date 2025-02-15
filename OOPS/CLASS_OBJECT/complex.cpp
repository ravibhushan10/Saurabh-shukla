#include<iostream>
class Complex
{
   int a,b;
   public:
   void set_data(int x, int y)
   {
    a=x; b=y;
   } 
   void display()
   {

   std :: cout<<a<<" "<<b;
    
   }

   Complex add(Complex r)
   {
      Complex temp;
      temp.a= r.a+ a;
      temp.b= r.b+ b;
             
      return temp;
   }
};
int main(void)
{

    Complex c1,c2,c3;
    c1.set_data(4,5);
    c2.set_data(6,7);
 c3= c1.add(c2);
   c3.display();
   return 0;
}