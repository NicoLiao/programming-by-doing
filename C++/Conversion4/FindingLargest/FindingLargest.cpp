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

    cout << "Array: ";
    for(int i = 0; i < arrSize; i++) {
        arr[i]=rand() % 50 + 1;
        cout<<arr[i]<< " ";
    }
    for(int i = 0; i < arrSize-1; i++) {
            if(larg < arr[i]) {
                larg = arr[i];
            }
    }
    cout << endl;
    cout << "The largest value is " << larg << endl;
    return 0;
}
