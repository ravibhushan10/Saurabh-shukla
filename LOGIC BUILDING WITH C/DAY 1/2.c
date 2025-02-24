// write a program  to get a character from keyboard using getch() and print its ascii value
#include<stdio.h>
#include<conio.h>
int main()
{
  char c;
  printf("enter the character:");
 c= getch();
 printf("%c is %d",c,c);
 getch();
}
