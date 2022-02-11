#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>  

using namespace std;
// int fourth() {
//     int x = 1, len, sum;
//     string str;
//     while(x < 10000) {
//         x++;
//         str = to_string(x);
//         for(int i=0; i<str.size(); i++) {
//             sum += pow((str[i]-'0'), 4);
//         }
//         if(x == sum) {
//             return x;
//         }
//     }
// }

// int main() {
//     fourth();
// }
int main() {
    int result = 0;
 
    for (int i = 2; i < 355000; i++) { 
        int sumOfPowers = 0; int number = i; 
        while (number > 0) {
            int d = number % 10;
            number /= 10;
 
            int temp = d;
            for(int j = 1; j < 5; j++){
                temp *= d;
            }
            sumOfPowers += temp;
        }
 
        if (sumOfPowers == i) {
            result += i;
        }
    }
    cout << result;
}