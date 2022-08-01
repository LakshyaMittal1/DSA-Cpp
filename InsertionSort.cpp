// Online C++ compiler to run C++ program online


// INSERTION SORT


#include <iostream>
using namespace std;

// Function to print array...
void printarray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

// Function of Insertion Sort (using "for loop")
/*void insertionsort(int arr[], int size){
    for(int i=1; i<size; i++){
        int temp=arr[i];
        int j=i-1;
        for(; j>=0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}*/

// Function of Insertion Sort (using "while loop")
/*void insertionsort(int arr[], int size){
    int i=1;
    while(i<=size){
        int temp = arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        i++;
        arr[j+1] = temp;
    }
}*/

// Function of Insertion Sort (using "while loop" (short and optimized))
void insertionsort(int arr[], int size){
    int i=1;
    while(i<=size){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && (arr[j] > temp)){
            arr[j+1] = arr[j];
            j--;
        }
        i++;
        arr[j+1] = temp;
    }
}

// Main function...
int main() {
    
    int arr[500];
    
    cout << "Enter size of array:- ";
    int size;
    cin >> size;
    
    cout << "Enter elements of array:- ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    
    insertionsort(arr, size);
    
    
    cout << "Sorted array after implementing Insertion Sort is:- ";
    printarray(arr, size);

    return 0;
}
