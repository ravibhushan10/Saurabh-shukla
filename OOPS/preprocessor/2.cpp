#include<iostream>
typedef  long long int  llint; 
/*typedef is used to created allises of data type 
for readibility of program

you can use "using " keyword also instead of them
*/
using ravi=unsigned int;

using namespace std;
int main()
{
    ravi a=10;
    llint b=20;

    cout<<sizeof(a)<<" "<<sizeof(b);
  
}