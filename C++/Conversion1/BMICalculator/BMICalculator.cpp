//KeyboardInput BMICalculator 15pts Nico Liao
#include <iostream>
using namespace std;
int main(){
    float m, kg, ft, bmi, end;
    cout << "Your height in feet only: ";
    cin >> ft;
    cout << "Your height in inches only: ";
    cin >> m;
    cout << "\n";
    cout << "Your weight in pounds: ";
    cin >> kg;
    cout << "\n";
    ft = (ft*12);
    m = ((m+ft)*0.0254);
    kg = (kg*0.453592);
    bmi = (kg/(m*m));
    cout << "Your bmi is: " << bmi << endl;


}