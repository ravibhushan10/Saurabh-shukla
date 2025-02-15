#include<iostream>
int sum(int,int=0,int=0);
int main(void)
{
    int a,b,c;
    std ::cout<<"Enter the three numbers:";
    std ::cin>>a>>b>>c;

    std ::cout<<"\nThe sum is:"<<sum(a);
    std ::cout<<"\nThe sum is:"<<sum(a,b);
    std ::cout<<"\nThe sum is:"<<sum(a,b,c);
   return 0;
}
int sum(int a,int b,int c)
{
    return (a+b+c);
}