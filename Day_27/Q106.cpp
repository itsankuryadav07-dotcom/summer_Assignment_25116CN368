#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 8, 25};
    int n = 5;

    int smallest = 9999;
    int secondSmallest = 9999;

    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "Second smallest = " << secondSmallest;

    return 0;
}