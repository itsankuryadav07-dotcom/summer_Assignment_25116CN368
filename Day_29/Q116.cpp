#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,2,2,3,4};
    int n = 6;

    int key;
    cin >> key;

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            count++;
    }

    cout << "Occurrence = " << count;

    return 0;
}