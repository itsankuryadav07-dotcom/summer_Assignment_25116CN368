#include<iostream>
using namespace std;

int main() {

    int arr[] = {4,5,6,7,0,1,2};
    int n = 7;

    int st = 0, end = n-1;

    while(st < end) {

        int mid = st + (end-st)/2;

        if(arr[mid] > arr[end])
            st = mid + 1;
        else
            end = mid;
    }

    cout << "Minimum element = " << arr[st];

    return 0;
}