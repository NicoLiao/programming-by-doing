#include <iostream>
#include <stdlib.h>
#include <time.h> 
using namespace std;

int main()
{
    srand (time(NULL));
    int arr[10];
    int larg = 0;
    int arrSize = *(&arr + 1) - arr;
    int s = 0;
    int *slot = &s;
    cout << "Array: ";
    for(int i = 0; i < arrSize; i++) {
        arr[i]=rand() % 50 + 1;
        cout<<arr[i]<< " ";
    }
    for(int i = 0; i < arrSize-1; i++) {
            if(larg < arr[i]) {
                larg = arr[i];
                *slot = i;
            }
    }
    cout << endl;
    cout << "The largest value is " << larg << endl;
    cout << "It is found at slot " << *slot << endl;
    return 0;
}
