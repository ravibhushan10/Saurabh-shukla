#include<iostream>
class Account
{
    private:

     int balance;
   static float interest;

public:
    void set(int x)
    {
        if(x <0)
        {

        balance= -x;
        }
        else
        balance=x;
       
    }

    void display(void)
    {
      std :: cout<<balance<<" "<<interest<<std ::endl;
    }
   static void set_interest(float x)
    {
        interest=x;
        std ::cout<<interest<<std ::endl;
    }
};
float Account :: interest=4.5f;
int main(void)
{

Account a1;
a1.set_interest(9.0f);

    
   return 0;
}