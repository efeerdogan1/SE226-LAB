#include <iostream>

using namespace std;

// Function Prototypes
int* createArray(int size);
void printArray(int* arr, int size);
int findMax(int* arr, int size);
bool swapValues(int* p1, int* p2);
void reverseArray(int* arr, int size);
void deleteArray(int* arr); 

int main(){
    // Creating Array
    int arraySize;
    cout << "Creating dynamic array..." << endl;
    cout << "Enter array size: " << endl;
    cin >> arraySize;
    int* arr = createArray(arraySize);

    // Find Max
    int max = findMax(arr, arraySize);
    cout << "Maximum element: " << max << endl;
    cout << "----------------------------------" << endl;

    // Swap Two Numbers
    int a = 5;
    int b = 10;
    swapValues(&a, &b);
    cout << "----------------------------------" << endl;

    // Reverse Array
    reverseArray(arr, arraySize);
    cout << "----------------------------------" << endl;

    // Delete Array
    deleteArray(arr);
}

bool swapValues(int* p1, int* p2){
    cout << "Swapping two numbers" << endl;
    cout << "Before swap" << endl;
    cout << "a = " << *p1 << endl;
    cout << "b = "<< *p2 << endl;

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "After swap" << endl;
    cout << "a = "<< *p1 << endl;
    cout << "b = "<< *p2 << endl;
    return true;
}

void printArray(int* arr, int size){
    cout << "Array Elements:" << endl;
    for(int i = 0;i < size; i++){
        cout << *(arr + i) << " ";
    }
}

int findMax(int* arr, int size){
    int max = arr[0];

    for(int i = 1;i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

void reverseArray(int* arr, int size){
    cout << "Reversing array..." << endl;

    for(int i = 0; i < size / 2; i++){
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    cout << "Array after reverseArray:" << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* createArray(int size){
    int* dynamicArr = new int[size];
    cout << "Enter values: ";
    for(int i = 0;i < size; i++){
        cin >> dynamicArr[i];
    }
    return dynamicArr;
}

void deleteArray(int* arr){
    cout << "Deleting array..." << endl;
    delete[] arr;
    cout << "Memory released successfully." << endl;
}