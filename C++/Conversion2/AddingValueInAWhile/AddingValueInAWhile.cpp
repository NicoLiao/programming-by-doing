//WhileLoop AddingValueInAWhile 30pts Nico Liao
#include <iostream>
using namespace std;
int main()
{
    int num = 1, total = 0;
    cout << "I will add up the numbers you give me" << endl;
    while(num != 0) {
        cout << "Number: ";
        cin >> num;
        total += num;
        cout << "The total number now is " << total << endl;
    }
    cout << "The total is " << total << endl;
    return 0;
}