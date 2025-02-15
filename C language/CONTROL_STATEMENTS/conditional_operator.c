// achieve if else  using conditional(ternary) operator
#include <stdio.h>
int main()
{
    // int x;
    // printf("enter the number:");
    // scanf("%d", &x);
    
    // x>=0?printf("%d is a non negative number:",x):printf("%d is a negative number:",x);


    // it is also used as a selective statement

    int x,y,result;
    printf("enter the two number:");
    scanf("%d%d",&x,&y);
    // here you have to select only big number

    // result=x>y?x:y;
    // printf("The maximum value is: %d",result);

     printf("The maximum value is: %d",x>y?x:y);
}