#include<bits/stdc++.h>
#include <math.h>
#include<string>  
#include <iostream>  

using namespace std;
 
string findSum(int num1, int num2)
{
    string str1 = " ", str2 = " ";
 
    string str = "1";
    int carry = 0;
    for(int x=num1+1; x<=1000; x++) {
        str1 = str;
        str2 = to_string(pow(x, x));
        if (str1.length() > str2.length())
            swap(str1, str2);
        int n1 = str1.length(), n2 = str2.length();
        reverse(str1.begin(), str1.end());
        reverse(str2.begin(), str2.end());
        for (int i=0; i<n1; i++)
        {
            int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
            str.push_back(sum%10 + '0');
    
            carry = sum/10;
        }
    
        for (int i=n1; i<n2; i++)
        {
            int sum = ((str2[i]-'0')+carry);
            str.push_back(sum%10 + '0');
            carry = sum/10;
        }
    
        if (carry)
            str.push_back(carry+'0');
        reverse(str.begin(), str.end());
    }
 
    return str;
}
 
int main()
{

    cout << findSum(1, 1000);
    return 0;
}