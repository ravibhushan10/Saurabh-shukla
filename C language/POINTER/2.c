/*
addition ,division,multiplication of two address is not possible

in the case of integer with address division and multiplication is not possible 

but you can add and substract integer from address

*/
#include<stdio.h>
int main()
{
    int a,b;
    int *p,*q;
    p=&a;
    printf("%d\n",p);

    p=&a+1;
    q=&b;

    printf("%d\n",p);
    printf("%d\n",q);
   
    
}