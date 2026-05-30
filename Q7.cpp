#include <iostream>
using namespace std;

int main() {
    int num, rem, product = 1;

    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        rem = num % 10;       // Extract digit
        product = product * rem;
        num = num / 10;       // Remove last digit
    }

    cout << "Product of digits = " << product;

    return 0;
}