#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,2,2,3,4};
    int n = 6;

    int key;
    cin >> key;

    int st = 0, end = n-1;
    int ans = -1;

    while(st <= end) {
        int mid = st + (end-st)/2;

        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "First occurrence = " << ans;

    return 0;
}