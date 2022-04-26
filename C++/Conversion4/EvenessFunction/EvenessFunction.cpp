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
    bool (*Even)(int n);
    Even = isEven;
    bool (*D3)(int n);
    D3 = isDivisibleBy3;
    for(int i = 0; i <= 20; i++) {
        cout << i << " ";
        if(Even(i) && D3(i)) {
            cout << "<=";
        }else if(Even(i)) {
            cout << "<";
        }else if(D3(i)) {
            cout << "=";
        }
        cout << endl;
    }
}
