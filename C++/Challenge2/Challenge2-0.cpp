#include <stdio.h>
#include <iostream>
using namespace std;
long long power(int a);
 
int main()
{
    int i, a;
    long long result=0;
     
    for(i=1; i<=10; i++)
    {
        result=(result+power(i))%10000000000000;
    }
          
    printf("%lld\n",result);
     
    return 0;
}
 
long long power(int a)
{
    int i;
    long long result=1;
     
    for(i=1; i<=a; i++)
    {
        result*=a;
        result=result%10000000000000;
    }
     
    return result;
}