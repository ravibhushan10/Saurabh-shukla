#include<stdio.h>
// #include<stdlib.h>
#include<windows.h>
#include<string.h>
int main()
{
    int choice,n,result,a,b,choice1;
    int count;
    
    while(1)
    {

        system("cls");
        printf("1.Calculator\n");
        printf("2.Factorial\n");
        printf("3.Sum of natural numbers\n");
        printf("4.Even - odd\n");
        printf("5.Prime number\n");
        // printf("6.Enter the 6 for exit:\n");
        printf("___________________________________________________\n");
        
        
        printf("Enter the choice what you want to do:\n");
        do
        {
            scanf("%d",&choice);
            if(choice>0 && choice<6)
            {
                break;
            }
            printf("please type the value between 1 to 5:\n");
        }while(1);
        
        switch(choice)
        {
            case 1: 
            
            
            printf("1.Addition\n");
            printf("2.Substraction\n");
            printf("3.Multiplication\n");
            printf("4.Division\n");
            printf("5.Moduls\n");
            
            printf("Enter the choice what you want to do:");
            scanf("%d",&choice1);
            
            switch(choice1)
            {
                case 1 :
                printf("Enter the two number:");
                scanf("%d%d",&a,&b);
                result=a+b;
                printf("The sum of %d and %d is:%d\n",a,b,result);
                break;
                case 2 :
                printf("Enter the two number:");
                scanf("%d%d",&a,&b);
                result=a-b;
                printf("The substraction of %d and %d is:%d\n",a,b,result);
                break;
                case 3 :
                printf("Enter the two number:");
                scanf("%d%d",&a,&b);
                result=a*b;
                printf("The multiplication of %d and %d is:%d\n",a,b,result);
                break;
                case 4 :
                printf("Enter the the first number:");
                scanf("%d",&a);
                do
                {
                    printf("Enter the the second number:");
                    scanf("%d",&b);
                    if(b!=0)
                    {
                        break;
                    }

                    printf("0 is not valid please type non zero value :\n")   ; 
                }while(1);
               

                    result=a/b;
                    printf("The division of %d and %d is:%d\n",a,b,result);
                    
               
                    break;
                    case 5 :
                    printf("Enter the two number:");
                scanf("%d%d",&a,&b);
                result=a%b;
                printf("The moduls of %d and %d is:%d\n",a,b,result);
                break;
                default:
                printf("Please enter the valid choice:");
                
            }
            break;
            
            case 2: 
            
            
            printf("Enter the number:\n");
            scanf("%d",&n);
            double result1=1;
            for(int i=n;i>=1;i--)
            {
                result1=result1*i;
            }
            printf("The factorial of %d is:%lf\n",n,result1);
            break;
            case 3: 
            printf("Enter the number:");
            scanf("%d",&n);
            result=(n*(n+1))/2;
            printf("The sum of first %d natural number is:%d\n",n,result);
                 break;
                 
                 case 4: 
                 printf("Enter the number:");
                 scanf("%d",&n);
                 if(n%2==0)
                {
                    printf("%d is even number\n",n);
                }
                else
                {
                    printf("%d is  odd number\n",n);
                }
                break;
        
                case 5:
                 count=0; 
                printf("Enter the number:");
                scanf("%d",&n);
                if(n<2)
                {
                printf("%d is not prime:\n",n);
                }
                else{
                for(int i=2;i*i<=n;i++)
                {
                    if(n%i==0)
                    {
                      
                        count++;
                        break;
                    }
                }
                if(count==0)
                {

                    printf("%d is prime\n",n);
                }
                else{
                    printf("%d is not  prime\n",n);

                }
               }
        
            //    printf("you are exiting the program:\n");
            //     case 6:exit(0);
               
               
            }
            

            char c;
            printf("Do you want to perform another calculation? Type 'Y' for yes and 'N' for no:\n");
    
           
            getchar(); /*it is used to remove /consume the '\n' character form the buffer*/
            scanf("%c", &c); 
            if (c != 'Y' && c != 'y') {
                break; 
            }
          
    }
   
}