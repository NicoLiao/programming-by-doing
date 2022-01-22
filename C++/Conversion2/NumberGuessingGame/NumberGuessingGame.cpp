//Random NumberGuessingGame 20pts Nico Liao
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int x;
    srand (time(NULL));
    int ran = rand()%10 + 1;
    cout << "I'm thinking a Number from 1-10" << endl;
    cout << "Your Guess: ";
    cin >> x;
    if(x == ran) {
        cout << "Thats right, the number was " << ran;
    }else {
        cout << "Sorry, the number was " << ran;
    }
    return 0;
}