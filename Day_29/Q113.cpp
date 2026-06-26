#include<iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50};
    int n = 5;

    int key;
    cin >> key;

    int st = 0, end = n-1;

    while(st <= end) {
        int mid = st + (end-st)/2;

        if(arr[mid] == key) {
            cout << "Element found at index " << mid;
            return 0;
        }
        else if(arr[mid] < key) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Element not found";

    return 0;
}