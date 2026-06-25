#include<iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = 5;

    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min;

    return 0;
}