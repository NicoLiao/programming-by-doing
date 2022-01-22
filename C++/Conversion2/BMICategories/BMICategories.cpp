//IfStatement BMICategories 45pts Nico Liao
#include <iostream>
using namespace std;
int main(){
    float m, kg, bmi;
    string category;
    cout << "Your height in m: ";
    cin >> m;
    cout << "\n";
    cout << "Your weight in kg: ";
    cin >> kg;
    cout << "\n";
    bmi = (kg/(m*m));
    cout << "Your bmi is: " << bmi << endl;
    if(bmi<15.0){
			category="very severely underweight";
    }else if(bmi>=15.0 && bmi<=16.0){
        category="severely underweight";
    }else if(bmi>=16.1 && bmi<=18.4){
        category="underweight";
    }else if(bmi>=18.5 && bmi<=24.9){
        category="normal weight";
    }else if(bmi>=25.0 && bmi<=29.9){
        category="overweight";
    }else if(bmi>=30.0 && bmi<=34.9){
        category="moderately overweight";
    }else if(bmi>=35.0 && bmi<=39.9){
        category="severely obese";
    }else if(bmi>=40.0){
        category="very severely (or \"morbidly\") obese";
	}
    cout << "BMI Category: " << category << endl;
}