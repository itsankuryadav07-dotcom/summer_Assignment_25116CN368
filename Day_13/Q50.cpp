#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    double myArray[size];
    double sum = 0;

    // Input loop
    cout << "Enter " << size << " numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> myArray[i];
        sum += myArray[i]; // Add each element to sum
    }

    // Calculate average (ensuring we don't divide by zero)
    double average = (size > 0) ? (sum / size) : 0;

    // Display results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}