//Sort Nico Liao SelectionSort 130pts

#include <bits/stdc++.h>
using namespace std;
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j; 
  
    for (i = 0; i < n-1; i++) 
    { 
        for (j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(&arr[j], &arr[i]); 
            }
        }
    } 
} 
  
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
  
int main() 
{ 
    int arr[] = {45, 87, 39, 32, 93, 86, 12, 44, 75, 50}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    selectionSort(arr, n); 
    cout << "Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
} 
