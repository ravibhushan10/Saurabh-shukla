#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<2)
    {
        printf("%d is not prime:",n);
    }
    else{
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
              
                printf("%d is not prime",n);
                return 0;
            }
        }
        printf("%d is prime",n);
    }
   
    
    
}