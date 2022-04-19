//Pointer and Arrays

//includes stdio.h
#include <stdio.h>
//includes the essential things that we use like cout<<
#include <iostream>
//makes it so that we dont have to type std:: before every command
using namespace std;


//main function of the code
int main()
{   
    //creates an array of floats of the size 3
    float arr[3]={5,6,7};

    // declare pointer variable
    //the pointer is a float which means it will return the value of a float
    float *ptr;
    
    //prints a string and ends line
    cout << "Displaying address using arrays: " << endl;

    // use for loop to print addresses of all array elements
    //the for loop prints out some strings to help indicate which elements are being printed out
    //&arr[i] points to the address of the previously created array called "arr" and uses i to point to the adresses of each slot
    for (int i = 0; i < 3; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    //sets the pointer to being the address of the last slot of the array
    ptr = arr;

    //prints a string and ends line
    cout<<"\nDisplaying address using pointers: "<< endl;

    // use for loop to print addresses of all array elements
    // using pointer notation
    for (int i = 0; i < 3; ++i)
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }

    cout<<"\nDisplaying value using pointers: "<< endl;

    // use for loop to print addresses of all array elements
    // using pointer notation
    //the for loop will print out each of the values of the variables in the array because the pointer is pointing to the slot
    for (int i = 0; i < 3; ++i)
    {
        cout << "ptr + " << i << " = "<< *(ptr + i) << endl;
    }

    //return 0 so the computer doesnt get mad
    return 0;
}