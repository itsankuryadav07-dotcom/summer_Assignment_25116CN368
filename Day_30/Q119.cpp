#include<iostream>
using namespace std;

int main() {

    int arr[] = {1,3,20,4,1};
    int n = 5;

    int st = 0, end = n-1;

    while(st <= end) {

        int mid = st + (end-st)/2;

        if((mid == 0 || arr[mid] > arr[mid-1]) &&
           (mid == n-1 || arr[mid] > arr[mid+1])) {
            cout << "Peak element = " << arr[mid];
            break;
        }

        else if(mid > 0 && arr[mid-1] > arr[mid])
            end = mid - 1;

        else
            st = mid + 1;
    }

    return 0;
}