// to find greatest among the three numbers using nested if else
#include <stdio.h>
int main()
{
    int x,y,z;
    printf("enter three  numbers:");
    scanf("%d%d%d", &x,&y,&z);

    /*

    this logic is more  better because it takes only one action statement to find greatest and it also takes only 2 comparasion to find greatest number  
    */ 
     
    if(x>y)
    {
        if(x>z)
        {
            printf("%d is the greatest number",x);
        }
        else{
            printf("%d is the greatest number",z);
            
        }
    }
    else{
        if(y>z)
        {
 
            printf("%d is the greatest number",y);
        }
        else{
            printf("%d is the greatest number",z);

        }
        

    }

  
   // // simplest one

//    printf("%d is greatest", x>y?  x>z?x:z : y>z?y:z) ;
    
}