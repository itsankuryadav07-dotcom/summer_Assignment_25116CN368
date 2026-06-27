#include<iostream>
using namespace std;

int main() {
    int arr[] = {4,5,6,7,0,1,2};
    int n = 7;

    int key;
    cin >> key;

    int st = 0, end = n-1;

    while(st <= end) {

        int mid = st + (end-st)/2;

        if(arr[mid] == key) {
            cout << "Element found at index " << mid;
            return 0;
        }

        if(arr[st] <= arr[mid]) {
            if(arr[st] <= key && key < arr[mid])
                end = mid - 1;
            else
                st = mid + 1;
        }
        else {
            if(arr[mid] < key && key <= arr[end])
                st = mid + 1;
            else
                end = mid - 1;
        }
    }

    cout << "Element not found";

    return 0;
}