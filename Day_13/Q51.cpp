#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    int myArray[size];

    // Input loop
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> myArray[i];
    }

    // Initialize smallest and largest
    int smallest = myArray[0];
    int largest = myArray[0];

    // Find smallest and largest
    for (int i = 1; i < size; i++) {
        if (myArray[i] < smallest) {
            smallest = myArray[i];
        }
        if (myArray[i] > largest) {
            largest = myArray[i];
        }
    }

    // Display results
    cout << "Smallest element = " << smallest << endl;
    cout << "Largest element = " << largest << endl;

    return 0;
}