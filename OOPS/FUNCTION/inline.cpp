#include<iostream>
 inline int add(int , int ,int );
// Here you have to mentiond inline during the function decleration for compiler 
int main(void)
{
    int a,b,c;
    std ::cin>>a>>b>>c;
    std :: cout<<"The sum is:"<<add(a,b,c);
   return 0;
}
 int add(int x,int y,int z)
{
    return (x+y+z);
}