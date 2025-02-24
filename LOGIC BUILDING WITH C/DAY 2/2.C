//calculate the average of three numbers
#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b,c;
   float avg;
   printf("enter the three numbers:");
   scanf("%d%d%d",&a,&b,&c);
   
//    avg=(a+b+c)/3;  /*it gives logical error because division of both int type value is always int */

   avg=(a+b+c)/3.0;

   printf("The average is:%f",avg);
   getch();
}