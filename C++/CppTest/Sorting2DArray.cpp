#include <iostream>
#include <ctime>
using namespace std;
#include<bits/stdc++.h>

void sortString(string &str)
    {
        sort(str.begin(), str.end());
        cout << str;
    }


int main (){
    int n, m;

    cout << "Welcome to the Alphabet Sorter!\nEnter Size (enter 0 0 to exit):"<<endl;
    cin >> n; cin >> m; 

    char arr [n] [m] = {};
    char alph [] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    char c;
    int r;



    cout << "Generated Array: " << endl;
    srand (time(NULL));
    for (int i=0;  i < n; i++) {    
        for (int j = 0; j < m; j++){
            r = rand() % 26;
            c = 'a' + r; 
            arr [i][j] = c;
            cout << arr [i][j] << " ";
        }
        cout << endl;
    }
    


    
    
    cout << endl << "Sorted Array: " << endl;
    


    for (int i = 0; i < 26; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                if (arr[i][j] == alph[k]){


                }
            }
        }
    }


    

}