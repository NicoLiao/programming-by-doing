#include <iostream>
#include <vector>

using namespace std;
void method1() {
//printing out one by one
    cout << "1 ";
    cout << "2 ";
    cout << "3 " << endl;
    cout << "4 ";
    cout << "5 ";
    cout << "6 " << endl;
    cout << "7 ";
    cout << "8 ";
    cout << "9 " << endl;
}

void method2() {
//printing out with a 2 for loop
    for(int i = 0; i <= 2; i++) {
        for(int j = 1; j <= 3; j++) {
            cout << j+(i*3) << " ";
        }
        cout << endl;
    }
}
void method3() {
//printing out with for loop + if statement
    for(int i = 1; i < 10; i++) {
        cout << i << " ";
        if(i%3 == 0) {
            cout << endl;
        }
    }
}
void method4() {
//printing out in 1 line 
    cout << "1" << " 2" << " 3" << "\n" << "4" << " 5" << " 6" << "\n" << "7" << " 8" << " 9";
}
void method5() {
//printing out with for loop + if statement + array

    int a[9] = {1,2,3,4,5,6,7,8,9};
    for(int i = 0; i < 9; i++) {
        cout << a[i] << " ";
        if((i+1)%3 == 0) {
            cout << endl;
        }
    }
}
void method6() {
//printing out with nested loop + array

    int a[9] = {1,2,3,4,5,6,7,8,9};
    for(int i = 0; i <= 2; i++) {
        for(int j = 0; j <= 2; j++) {
            cout << a[j+(i*3)] << " ";
        }
        cout << endl;
    }
}
void method7() {
//printing out with nested loop + a blank array

    int a[9];
    for(int i=1; i<=9; i++) {
        a[i-1] = i;
    }
    for(int i = 0; i <= 2; i++) {
        for(int j = 0; j <= 2; j++) {
            cout << a[j+(i*3)] << " ";
        }
        cout << endl;
    }
}
void method8() {
//printing out with array + cout manually
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    cout<<arr[0]<<arr[1]<<arr[2]<<endl;
    cout<<arr[3]<<arr[4]<<arr[5]<<endl;
    cout<<arr[6]<<arr[7]<<arr[8]<<endl;
}
void method9() {
//printing out with variables that alter as the forloop goes
    int i2 = 2;
    int i3 = 3;
    for(int i = 1; i < 10; i += 3){
        cout << i << " " << i2 << " " << i3 << endl;
        i2 += 3;
        i3 += 3;
    }
}
void method10() {
//vector 
    vector<int> a = {1,2,3,4,5,6,7,8,9};
    for(int c = 0; c < 3; c++){
        cout << a.at(c) << ' ';
    }
    cout << endl;
    for(int c = 3; c < 6; c++){
           cout << a.at(c) << ' ';
    }
    cout << endl;
    for(int c = 6; c < 9; c++){
        cout << a.at(c) << ' ';
    }
}
void method11() {
//for loop but numbers are negative 
    for(int i = -1; i >= -9; i--) {
        cout << abs(i) << " ";
        if(i%3 == 0) {
            cout << endl;
        }
    }
}
void method12() {
//2D Array + forloop
    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void method13() {
//while loop
    int i=1;
    while(i<10) {
        cout << i << " ";
        if(i%3 == 0) {
            cout << endl;
        }
        i++;
    }
}
void method14() {
//do while
    int i=1;
    do {
        cout << i << " ";
        if(i%3 == 0) {
            cout << endl;
        }
        i++;
    }while(i<10);
}
void method15() {
//while with pointers
    int i=1;
    int *j = &i;
    while(i<10) {
        cout << *j << " ";
        if(i%3 == 0) {
            cout << endl;
        }
        i++;
        j = &i;
    }
}
void method16(int i) {
//Recursion
    if(i < 10) {
        cout << i << " ";
        if(i%3 == 0) {
            cout << endl;
        }
        i++;
        method16(i);
    }
}
void method17() {
//switch
    for(int i=1; i<10; i++) {
        switch (i) {
            case 1:
                cout << "1 ";
                break;
            case 2:
                cout << "2 ";
                break;
            case 3:
                cout << "3" << endl;
                break;
            case 4:
                cout << "4 ";
                break;
            case 5:
                cout << "5 ";
                break;
            case 6:
                cout << "6" << endl;
                break;
            case 7:
                cout << "7 ";
                break;
            case 8:
                cout << "8 ";
                break;
            case 9:
                cout << "9";
                break;
        }     
    }
}
void method18() {
//nested while loop + dowhile loop
    int count = 1;
    int i = 0;
    while(i <3){
        int j = 0;
        do{
            cout<<count<<" ";
            count++;
            j++;
        }while(j<3);
    cout << endl;
    i++;
    }
}
void method19() {
    //2D Array made by array 
    int arr1[3] = {1,2,3}, arr2[3] = {4,5,6}, arr3[3] = {7,8,9};;
    int a[3][3] = {
        {arr1[0], arr1[1], arr1[2]},
        {arr2[0], arr2[1], arr2[2]},
        {arr3[0], arr3[1], arr3[2]},

    };
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void method20() {
//structure
    struct {
        int n;
    } myStructure;
    for(myStructure.n = 1; myStructure.n < 10; myStructure.n++) {
        cout << myStructure.n << " ";
        if(myStructure.n%3 == 0) {
            cout << endl;
        }
    }
}
int main()
{
    method1();
    method2(); 
    method3(); 
    method4(); 
    method5(); 
    method6(); 
    method7(); 
    method8(); 
    method9(); 
    method10(); 
    method11(); 
    method12(); 
    method13(); 
    method14(); 
    method15(); 
    method16(1);
    method17(); 
    method18(); 
    method19(); 
    method20();
}
