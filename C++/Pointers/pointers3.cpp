//includes the essential things that we use like cout <<
#include <iostream>
//makes it so that we don't have to type std:: before every command
using namespace std;

//creates an integer M that is 3
const int M = 3;
//creates an int that is n with the value of 3
const int N = 3;

//creates a function printArr with parameters value of an array and size of an arr (both integers)
//when the function is called it will basically return the value in the slot that is requested
void printArr(int *array, int sizeArr){
    //loops through the loop for (the size of the array) amount of times
    for(int i=0;i<sizeArr;i++)
    //for every time it loops, the code will print out the slot of the array that is inputed as *array
    cout<<*(array+i)<<endl;
}

//sets up a function called print2D which requests for a 2d array and its sizes on both axes
void print2D(int arr[M][N]){
    //basically this nested loop will go through eveyr single slot in the 2d array (it will print out the j rows first then move on to the next j row for i amount of times)
    //outer loop loops M times
    for (int i = 0; i < M; i++){
    //inner loops loops N times
      for (int j = 0; j < N; j++){
          //it prints out the i and j coordinate of the array along with a space so it isnt all cluttered
        cout<<arr[i][j]<<" ";
        }cout<<endl; //endl after each row of j is done printing so it will be very neat and print into a nice grid
    }
}

//sets up a function that asks for the pointer that points to the value of an int arr and asks for in r and int c
void print2DP(int *arr, int r, int c){
    //the result of this will print out the same thing as the previous function, except this time the pointer's variable will point to the size of the array, so it can't just ask for arr[M][N] like last time
    //the outer loop loops for r amount of times (which is gonna be the "i" size of the array from the previous function, judging by what is going to be inputted later)
    for (int i = 0; i < r; i++){
        //the inner loops will loop for c amount of tiems which is going to be the amount of j values are in the i values in the array
      for (int j = 0; j < c; j++){
          //prints out the pointer that points to the value of arr i and j, whichm mean that it will print out the values in those slots one by one
          //*arr is the value of the *(arr + i) will be the value of the variable in slot i of the array because the pointer is pointing to it, same with j
        cout<<*(arr+i+j)<<" ";
      }cout<<endl; //prints a new line so it is organized
    }
}
int main()
{
    //creates a normal array with the size of 6
    int arr[6]={3,6,2,5,3,1};
    //calls the function from before, uses a pointer that points to the address of arr[0], which in the fucntion will decide how many times it loops
    //you use the pointer to point at the address at the 0th slot of the array to make the function print out the value of that slot (because the function uses * instead of &)
    printArr(&arr[0],6);
    //sets up a 2d array with sizes 3 and 3
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //prints the array normally without using any pointers that point to their values or addresses
    print2D(arr2);
    cout<<endl;//endl so the thing stays organized
    //it calls the function and gives the address of arr2's slots 0 and 0 so eventually the function will print out the value of each of the slots one by one
    print2DP(&arr2[0][0],3,3);
    return 0;
}