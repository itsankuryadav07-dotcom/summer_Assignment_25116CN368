#include <iostream>
using namespace std;

int main() {
    string str;
    int count = 0;

    cout << "Enter string: ";
    cin >> str;

    for(int i=0; str[i] != '\0'; i++)
        count++;

    cout << "Length of string = " << count;

    return 0;
}