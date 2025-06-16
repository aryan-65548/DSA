#include <iostream>
using namespace std;

int main() {
    int cap = 2;  // initial capacity
    int size = 0;      //  number of elements right now
    int* arr = new int[cap];  // initial array

    // Let's insert 5 elements dynamically
    for (int i = 0; i < 5; i++) {
        if (size == cap) {
            // Double the capacity
            cap *= 2;
            
            // Create a new bigger array
            int* newArr = new int[cap];

            // Copy old elements
            for (int j = 0; j < size; j++) {
                newArr[j] = arr[j];
            }

            // Delete old array
            delete[] arr;

            // Point array to new array
            arr = newArr;
        }

        // Add new element
        arr[size] = (i + 1) * 10; 
        size++;
    }

    // Print the array
    cout << "Dynamic array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    
    delete[] arr;

    return 0;
}
