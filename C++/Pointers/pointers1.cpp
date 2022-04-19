//pointer & address

//includes iostream, which has a lot of things that you use in the code like cout <<
#include <iostream>
//allows you to use strings in the program
#include <string>
//you dont have to type std:: before every line
using namespace std;


//creates a function called sayHello that has a parameter that is a string
void sayHello(string name){
    //prints out the string "Hello" along with the parameter that it asked for
    cout<<"Hello "<<name;   
}

//creates a function called sayHi that takes in the address of the parameter name
void sayHi(string &name){
    //prints out the string "Hi " along with the parameter that it asks for
    cout<<"Hi "<<name;
}

//creates a function that has parameters int*x and int*y which means that it will take the location of the inputted values when the function is called 
int *larger(int *x, int *y){
    //if the value (location) of x is greater then y, then return y
    if(*x>*y) return x;
    //if the condition above is not met, return y;
    else return y;
}

//is the main place where the code happens
int main()
{
    //declares a string name called "World"
    string name = "World";
    //calls the function say hello with the string name which will make it print "Hello World"
    sayHello(name);
    //it will print out a new line
    cout<<endl;
    
    //creates a pointer variable called pName that points to the string name to get its address;
    string *pName = &name;
    //calls the function sayHi that puts in the address of the variable name so the function will cout << "Hi World";
    sayHi(*pName);
    //declares variable a as an int and stores the value 5 in it
    int a = 5;
    //declares variable b as an int and stores the value 1 in it
    int b = 1;
    //creates a pointer variable that stores the larger address of int a and int b
    int *pNum = larger(&a,&b);
    //it prints out \n and then the pointer that points to the larger address of a and b and then it prints out the string " is larger" and then endl
    cout<<"\n"<<*pNum<<" is larger"<<endl;
    //return 0 so the compiler doesn't explode
    return 0;
}