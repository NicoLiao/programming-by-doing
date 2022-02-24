#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;


class triangle{
private:
int x1, y1, x2, y2, x3, y3;
double area, side1, side2, side3;
public:
triangle(int X1, int Y1, int X2, int Y2, int X3, int Y3){ 
x1 = X1;
x2 = X2; 
x3 = X3; 
y1 = Y1;
y2 = Y2; 
y3 = Y3; 
}

void setSide1( int X1, int Y1){
side1 = sqrt(pow(2,X1)+pow(2,Y1));
}
void setSide2( int X2, int Y2){
side2 = sqrt(pow(2,X2)+pow(2,Y2));
}
void setSide3( int X3, int Y3){
side3 = sqrt(pow(2,X3)+pow(2,Y3));
}
void setArea(){
int s = (side1+side2+side3)/2;
area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
}
double getSide1(){ 
return side1;
}
double getSide2(){
return side2;
}
double getSide3(){
return side3;
}
double getArea(){
return area;
}
};

int main() {
srand (time(NULL));
double area, side1, side2, side3;
int r1 = rand()%10+1;
int r2 = rand()%10+1;
int r3 = rand()%10+1;
int r4 = rand()%10+1;
int r5 = rand()%10+1;
int r6 = rand()%10+1;
triangle shape(r1, r2, r3, r4, r5, r6); 
cout<<"The triangle has sides of "<< shape.getSide1()<< " "<< shape.getSide2()<<" "<< shape.getSide3()<<" and an area of " << shape.getArea();
}