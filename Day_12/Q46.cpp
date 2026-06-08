#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0, digits = 0, temp = n;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int num;
    cin >> num;

    if (isArmstrong(num))
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}