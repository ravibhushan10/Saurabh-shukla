// to find greatest among the three numbers using nested if else
#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c;
    printf("enter three  numbers:");
    scanf("%d%d%d", &a,&b,&c);

  //  // this logic takes more time because it check three action statement to find greater number
    // if(a>b&&a>c)
    // {
    //     printf("%d is greatest:",a);
    // }
    // if(b>c&&b>a)
    // {
    //     printf("%d is greatest:",b);

    // }
    // if(c>a&&c>b)
    // {
    //     printf("%d is greatest:",c);

    // }


    // this logic is more  better than above because it takes only one action statement to find greatest but it perform total 4 work on comparasion
    if(a>b&&a>c)
    {

        printf("%d is greatest:",a);
    }

    else{

        if(b>c)
        {
            printf("%d is greatest:",b);
            
        }
        else{
            printf("%d is greatest:",c);

        }
    }

   
getch();

}