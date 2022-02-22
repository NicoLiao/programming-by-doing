//functions WhereIsIt 90pts Nico Liao
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 
using namespace std;
int main(){
    srand (time(NULL));
    int value;
    int array [10];
    cout << "Array: ";
    for(int i=0; i<10; i++){
        array[i]=rand() % 50 + 1;
        cout<<array[i]<< " ";
    }
    cout << endl;
    cout << "Value To Find: ";
    cin >> value;
    for(int i=0; i<10; i++){
        if(array[i] == value) {
            cout << value << " is in slot " << i << endl;
        }else {
            cout << value << " is not in the array" << endl;
        }
    }
}