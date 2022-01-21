//ForLoop CountingMachineRevisited 25pts Nico Liao
#include <iostream>
using namespace std;
int main()
{
    int from, to, by;
    cout << "Count from: ";
    cin >> from;
    cout << "Count to: ";
    cin >> to;
    cout << "Count by: ";
    cin >> by;
    for(int i = from; i <= to; i+=by) {
        cout << i << " ";
    }
    return 0;
}