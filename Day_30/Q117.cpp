#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int st = 0, end = n;
    int ans = 0;

    while(st <= end) {
        int mid = st + (end-st)/2;

        if(mid * mid == n) {
            ans = mid;
            break;
        }
        else if(mid * mid < n) {
            ans = mid;
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Square root = " << ans;

    return 0;
}