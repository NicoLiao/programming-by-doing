#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

long long power(int a);
 
int main()
{
    int i, a, b;
    cout << "Number 1: ";
    cin >> a;
    cout << "Number 2: ";
    cin >> b;
    long long ans=0;
     
    for(i=a; i<=b; i++)
    {
        ans=(ans+power(i))%10000000000000;
    }
     
    ans=(ans%10000000000);
     
    printf("%lld\n",ans);
     
    return 0;
}
 
long long power(int a)
{
    int i;
    long long ans=1;
     
    for(i=1; i<=a; i++)
    {
        ans*=a;
        ans=ans%10000000000000;
    }
     
    return ans;
}