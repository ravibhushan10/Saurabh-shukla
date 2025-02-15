#include <stdio.h>
int main()
{
    int m;
    printf("enter the marks:");
    scanf("%d", &m);

    if (m > 90)
        printf("grade is A");
    else if (m > 80)
        printf("grade is B");
    else if (m > 70)
        printf("grade is C");
    else
        printf("grade is D");
            
        
    
}