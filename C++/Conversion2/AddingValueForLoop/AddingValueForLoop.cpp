//ForLoop AddingValues 30pts Nico Liao
#include <iostream>
using namespace std;
int main()
{
    int num = 0, sum = 0;
    cout << "Number: ";
    cin >> num;
    for(int i = 1; i<=num; i++) {
        cout << i << " ";
    }
    for(int i = 1; i<=num; i++) {
        sum += i;
    }
    cout << "The sum is " << sum << endl;
    return 0;
}