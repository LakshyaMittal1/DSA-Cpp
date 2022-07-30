// Online C++ compiler to run C++ program online
//SELECTION SORT
#include <iostream>
using namespace std;

void printarray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}


void SelectionSort(int arr[], int size) {
    for(int i=0; i<size-1; i++){
        int minindex = i;
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
}

int main(){
    
    int arr[500];
    
    cout << "Enter size of array:- ";
    int size;
    cin >> size;
    
    cout << "Enter elements of array:- ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    
    SelectionSort(arr, size);
    
    cout << "Sorted array after implementing Selection Sort is:- ";
    printarray(arr, size);
    
    return 0;
}
