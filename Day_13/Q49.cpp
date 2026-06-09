#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    int myArray[size]; // Declaring the array

    // Input: Reading values from the user
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> myArray[i];
    }

    // Display: Outputting the array values
    cout << "Your array is: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}