#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 8, 25};
    int n = 5;

    int largest = -1;
    int secondLargest = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest = " << secondLargest;

    return 0;
}