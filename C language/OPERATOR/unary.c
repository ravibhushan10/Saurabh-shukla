/* unary operator = '+' ,'-' '++' , '--',sizeof() */
#include<stdio.h>
int main()
{
    int x=10;

    /* increament and decreament  */
    printf("%d\n",x++); /* 10 =post increament it have less precedence than assingnment operator*/
    printf("%d\n",x--);


    printf("%d\n",++x);  /* 10 =pre increament*/
    printf("%d\n",--x);

    printf("%d\n",-x);
    printf("%d\n",+x);

    /*sizeof() operator */

    /* for sizeof(data types) */

    // int a,b,c,d;
    // a=sizeof(int);
    // b=sizeof(float);
    // c=sizeof(double);
    // d=sizeof(char);
    // printf("%d\n",a);
    // printf("%d\n",b);
    // printf("%d\n",c);
    // printf("%d\n",d);

//  /* for sizeof(variable) */
//     int a;
//     float b;
//     double c;
//     char d;
//     printf("%d\n",sizeof(a));
//     printf("%d\n",sizeof(b));
//     printf("%d\n",sizeof(c));
//     printf("%d\n",sizeof(d));

  /* for sizeof(consonant) */
  int w,y,z;
  w=sizeof(23);
  y=sizeof(23.5); /*here it will take by default double*/
  z=sizeof('a'); /*here it will firstly convert in decimal due to ASCII value */
  printf("%d\n",w);
  printf("%d\n",y);
  printf("%d\n",z);

}
