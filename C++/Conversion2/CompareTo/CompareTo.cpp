//IfStatement Compare 30pts Nico Liao
#include <iostream>
using namespace std;
int main()
{
    string str1 = "applebees", str2 = "apple";
    cout << "Comparing applebees with apple produces ";
    cout << str1.compare(str2) << endl;
    str1 = "applepie", str2 = "pet";
    cout << "Comparing " << str1 << " with " << str2 << " produces ";
    cout << str1.compare(str2) << endl;
    str1 = "phone", str2 = "computer";
    cout << "Comparing " << str1 << " with " << str2 << " produces ";
    cout << str1.compare(str2) << endl;
    str1 = "cup", str2 = "book";
    cout << "Comparing " << str1 << " with " << str2 << " produces ";
    cout << str1.compare(str2) << endl;
    str1 = "paper", str2 = "cat";
    cout << "Comparing " << str1 << " with " << str2 << " produces ";
    cout << str1.compare(str2) << endl;
    str1 = "tissue", str2 = "mirror";
    cout << "Comparing " << str1 << " with " << str2 << " produces ";
    cout << str1.compare(str2) << endl;
    str1 = "backpack", str2 = "trashcan";
    cout << "Comparing " << str1 << " with " << str2 << " produces ";
    cout << str1.compare(str2) << endl;
    str1 = "axe", str2 = "dog";
    cout << "Comparing " << str1 << " with " << str2 << " produces ";
    cout << str1.compare(str2) << endl;
    str1 = "Tesla", str2 = "Tesla";
    cout << "Comparing " << str1 << " with " << str2 << " produces ";
    cout << str1.compare(str2) << endl;
    str1 = "cow", str2 = "cow";
    cout << "Comparing " << str1 << " with " << str2 << " produces ";
    cout << str1.compare(str2) << endl;
    str1 = "Benz", str2 = "Lexus";
    cout << "Comparing " << str1 << " with " << str2 << " produces ";
    cout << str1.compare(str2) << endl;
    str1 = "BMW", str2 = "Zen";
    cout << "Comparing " << str1 << " with " << str2 << " produces ";
    cout << str1.compare(str2) << endl;
    return 0;
}