#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reverse = 0, rem;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num > 0) {
        rem = num % 10;                    
        reverse = reverse * 10 + rem;     
        num = num / 10;                   
    }

    if (originalNum == reverse) {
        cout << originalNum << " is a Palindrome number";
    } else {
        cout << originalNum << " is not a Palindrome number";
    }

    return 0;
}