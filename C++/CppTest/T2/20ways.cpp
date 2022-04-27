#include <iostream>

using namespace std;
void method1() {
//printing out one by one
    cout << "1 ";
    cout << "2 ";
    cout << "3 " << endl;
    cout << "4 ";
    cout << "5 ";
    cout << "6 " << endl;
    cout << "7 ";
    cout << "8 ";
    cout << "9 " << endl;
}

void method2() {
//printing out with a 2 for loop
    for(int i = 0; i <= 2; i++) {
        for(int j = 1; j <= 3; j++) {
            cout << j+(i*3) << " ";
        }
        cout << endl;
    }
}
void method3() {
//printing out with for loop + if statement
    for(int i = 1; i < 10; i++) {
        cout << i << " ";
        if(i%3 == 0) {
            cout << endl;
        }
    }
}
void method4() {
//printing out in 1 line 
    cout << "1" << " 2" << " 3" << "\n" << "4" << " 5" << " 6" << "\n" << "7" << " 8" << " 9";
}
int main()
{
    method4();
}
