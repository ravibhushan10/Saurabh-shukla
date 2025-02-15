#include<iostream>
#define PI 3.14
#define cube(x) ((x)*(x)*(x))
 /*here you can define any value that is constant in entire program*/
 
 /*you can use "const" keyword instead of #define*/

 double const pi=3.20;
using namespace std;

int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;

    float result=PI * n*n;
    cout<<"the area is:"<<result;
    cout<<"the cube is:"<<cube(n)<<endl;
    cout<<pi;
}