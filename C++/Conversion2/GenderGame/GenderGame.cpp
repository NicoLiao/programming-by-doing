//IfStatement GenderGame 50pts   Nico Liao
#include <iostream>
using namespace std;
int main()
{
    string fname, lname, gender, married;
    int age;
    cout << "What's your first name" << endl;
    cin >> fname;
    cout << "What's your last name" << endl;
    cin >> lname;
    cout << "What's your gender (F or M)" << endl;
    cin >> gender;
    if (gender == "M")
    {
        cout << "What's your age" << endl;
        cin >> age;
        if (age < 20)
        {
            cout << "Then I shall call you " << fname << " " << lname;
        }
        else if (age >= 20)
        {
            cout << "Then I shall call you Mr." << fname << " " << lname;
        }
    }
    else if (gender == "F")
    {
        cout << "What's your age" << endl;
        cin >> age;
        if (age < 20)
        {
            cout << "Then I shall call you " << fname << " " << lname;
        }
        else if (age >= 20)
        {
            cout << "Are you married (y or n)" << endl;
            cin >> married;
            if (married == "y")
            {
                cout << "Then I shall call you Mrs." << lname << endl;
            }
            else if (married == "n")
            {
                cout << "Then I shall call you Ms." << lname << endl;
            }
        }
    }
    return 0;
}