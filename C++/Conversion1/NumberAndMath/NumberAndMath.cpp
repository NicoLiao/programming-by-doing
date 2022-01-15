//BasicAndPrinting NumberAndMath 7pts Nico Liao
#include <iostream>

using namespace std;

int main()
{
    //print out the sentence
    cout << "I will now count my chickens:" << endl;
    cout << "Hens " << ( 25 + 30 / 6 ) << endl;
    cout << "Roosters " << ( 100 - 25 * 3 % 4 ) << endl;
    //print out the sentence
    cout << "Now I will count the eggs:" << endl;
    cout << 3 + 2 + 1 - 5 + 4 % 2 - 1 / 4 + 6 << endl;
    cout << "Is it true that 3 + 2 < 5 - 7?" << endl;
    cout << boolalpha << (3 + 2 < 5 - 7) << endl;
    cout << "What is 3 + 2? " << ( 3 + 2 ) << endl;
    cout << "What is 5 - 7? " << ( 5 - 7 ) << endl;
    //print out the sentence
    cout << "Oh, that's why it's false." << endl;
    //print out the sentence
    cout << "How about some more." << endl;
    cout << "Is it greater? " << boolalpha << ( 5 > -2 ) << endl;
    cout << "Is it greater or equal? " << boolalpha << ( 5 >= -2 ) << endl;
    cout << "Is it less or equal? " << boolalpha << ( 5 <= -2 ) << endl;
    return 0;
}
