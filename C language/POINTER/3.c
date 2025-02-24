#include<stdio.h>
void swapping(int * ,int *);
int main()
{
    int a,b;
    printf("Enter the two number:") ;
    scanf("%d%d",&a,&b);

    // swapping(a,b);
    // // here in call by value the actual value of swapping function is not reflected  
    // // one copy of a and b goes to function

    swapping(&a,&b);
    printf("a=%d and b=%d",a,b);


}
// void swapping(int x,int y)
// {
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
//     printf("a=%d and b=%d",x,y);

// }
void swapping(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    

}