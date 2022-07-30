// Online C++ compiler to run C++ program online
// BUBBLE SORT
#include <iostream>
using namespace std;

void printarray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}



void bubblesort(int arr[], int size){
    
    for(int i=1; i<size; i++){
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j=0; j<size-i; j++){
            
            //process elemenr till n-i th index
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            //it means array is already sorted and no need to check or run the loop anymore
            break;
        }
    }
}

int main() {
    
    int arr[500];
    
    cout << "Enter size of array:- ";
    int size;
    cin >> size;
    
    cout << "Enter elements of array:- ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    
    bubblesort(arr, size);
    
    
    cout << "Sorted array after implementing Bubble Sort is:- ";
    printarray(arr, size);

    return 0;
}