//Array CopyingArray 55pts Nico Liao
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 
using namespace std;

int main(){
    srand (time(NULL));
    cout<<"Array 1: ";
    int array [10];
    for(int i=0; i<10; i++){
        array[i]=rand() % 100 + 1;
        array[9]=-7;
        cout<<array[i]<< " ";
    }
    cout<<"\n";
    cout<<"Array 2: ";
    int array2 [10];
    for(int i=0; i<10; i++){
        array2[i]=array[i];
        array2[9]=rand() % 100 + 1;
        cout<<array2[i]<< " ";
    }
return 0;
}