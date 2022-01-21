//IfStatement ALittleQuiz 40pts Nico Liao
#include <iostream>
using namespace std;
int main()
{
    int ans;
    int correct;
    cout << "What is the capital of Alaska" << endl;
    cout << "	1) Melbourne" << endl;
    cout << "	2) Anchorage" << endl;
    cout << "	3) Juneau" << endl;
    cin >> ans;
    if (ans == 3) {
        cout << "Correct, next" << endl;
        correct++;
    }
    else{
        cout << "Incorrect, it was 3" << endl;
    }
    cout << "Q2) Can you store the value \"cat\" in a variable of type int?" << endl;
    cout << "	1) Yes" << endl;
    cout << "	2) No" << endl;
    cin >> ans;
    if (ans == 2) {
        cout << "Correct, next" << endl;
        correct++;
    }
    else{
        cout << "Incorrect, it was 2" << endl;
    }
    cout << "Q3) What is the result of 9+6/3?" << endl;
    cout << "	1) 5" << endl;
    cout << "	2) 11" << endl;
    cout << "	3) 15/3" << endl;
    cin >> ans;
    if (ans == 2) {
        cout << "Correct, next" << endl;
        correct++;
    }
    else{
        cout << "Incorrect, it was 2" << endl;
    }
    cout << "You got " << correct << " out of 3" << endl;
    return 0;
}