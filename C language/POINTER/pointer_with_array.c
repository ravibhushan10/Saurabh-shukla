// use of pointer in array
#include<stdio.h>
void input(int *x,int a)
{
    for(int i=0;i<a;i++) 
    {
        scanf("%d",x+i);
    }
}
void display(int *x,int a)
{
    for(int i=0;i<a;i++) 
    {
       printf("%d ",*(x+i));
       
    }
}
void sort(int *x, int a)
{

    // using bubble sort 
    int round;
    for(int round=0;round<a-1;round++)
    {
        for(int j=0;j<a-round-1;j++)
        {
            if(*(x+j)>*(x+j+1))
            {
                int temp;
                temp=*(x+j);
                *(x+j)=*(x+j+1);
                *(x+j+1)=temp;
            }
        }
    }
}
int main()
{
   int arr[20],n;

   printf("Enter the size of  array:");
   scanf("%d",&n);

   printf("Enter the elements of array:");
   input(arr,n);
//    here we are passing the address of first block of array to function
   printf("your  array is:");
   display(arr,n);
 
   printf("\n");
   printf("your sorted array is:");
   sort(arr,n);
   display(arr,n);
} 