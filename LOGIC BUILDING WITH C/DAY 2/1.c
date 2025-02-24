// write a program to calculate the area of circle
#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main()
{
  float r,area;
  printf("enter the radius:");
  scanf("%f",&r);
  area=PI*r*r;
  printf("The area is %f:",area);
 getch();
}