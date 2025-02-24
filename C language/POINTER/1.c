#include<stdio.h>
int main()
{
    int x=10,*p,**q,***r,****s;
    p=&x;
    q=&p;
    r=&q;
    s=&r;
   
    printf("%d\n",x);
    // accesing with the help of s 
    ****s=20;
    printf("%d\n",x);
    
    ***r=30;
    printf("%d\n",x);
    
    printf("%u\n",p);
    printf("%u\n",q);
    printf("%u\n",r);
    printf("%u\n",s);
    
   
}
