#include<stdio.h>
void add(void);
int main()
{
    add();
}
void add()
{
    int a,b,c;
    printf("enter the two number:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is:%d",c);
}