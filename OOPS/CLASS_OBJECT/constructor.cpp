#include<iostream>
class Account
{
    private:
    int balance;
    float interest;
    public:
    Account(int x,float y)
    {
        balance=x;
        interest=y;
    }
    void display()
    {
        std ::cout<<balance<<" "<<interest<<std ::endl;
    }
};
int main(void)
{
    Account a1(1000,4.5f);
    a1.display();
    
   return 0;
}