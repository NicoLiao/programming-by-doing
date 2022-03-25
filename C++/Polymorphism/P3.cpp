
#include <iostream>
#include <string>
using namespace std;

class Quadrilateral {
    private:
    double Area;
    string Type; //rectangle, square, trapezoid

    public:

    Quadrilateral(){ //initialize with nothing
    }

    Quadrilateral(int x){
        Area = x*x;
        Type = "Square";
    } //create a square 
        
    Quadrilateral(int w, int h){
        Area = w*h;
        Type = "Rectangle";
    } //create a rectangle
        
    Quadrilateral(int b1, int b2, int h){
        Area = (b1+b2)*h/2;
        Type = "Trapezoid";
    } //create a trapezoid

    double changeShape(int x){
 
        return x*x;
    } //change to a square with a side of x
    
    double changeShape(int w, int h){

        return w*h;
    } //change  to a rectangle with sides w and h

    double changeShape(int b1, int b2, int h) {
 
        return (b1+b2)*h/2;
        //change  to a trapezoid 
    }

    double getArea (){
        return Area;
    }

    string getType(){
        return Type;
    }

};

int main (){

    Quadrilateral shapes[3]={Quadrilateral (6), Quadrilateral (6,5), Quadrilateral (3,6,5)};

    Quadrilateral squares[5];
    for(int i = 0; i<5;i++){
        squares[i]=Quadrilateral(i+5);
    }

    int sum = 0;

    for (int i = 0; i < 2; i++){
        sum += squares[i].getArea();
    }

    for (int i = 0; i<4; i++){
        sum += squares[i].getArea();
    } 

    cout << "Sum of areas: " << sum;
}