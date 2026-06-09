#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    int myArray[size];
    int evenCount = 0;
    int oddCount = 0;

    // Input loop
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> myArray[i];
        
        // Check if the number is even or odd
        if (myArray[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Display results
    cout << "Total Even elements = " << evenCount << endl;
    cout << "Total Odd elements = " << oddCount << endl;

    return 0;
}