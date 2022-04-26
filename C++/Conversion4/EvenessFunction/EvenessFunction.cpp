#include <iostream>

using namespace std;
bool isEven(int n) {
    if(n%2==0){
			return true;
	}return false;
}
bool isDivisibleBy3(int n) {
    if(n%3==0){
			return true;
	}return false;
}
int main()
{
    for(int i = 0; i <= 20; i++) {
        cout << i << " ";
        if(isEven(i) && isDivisibleBy3(i)) {
            cout << "<=";
        }else if(isEven(i)) {
            cout << "<";
        }else if(isDivisibleBy3(i)) {
            cout << "=";
        }
        cout << endl;
    }
}
