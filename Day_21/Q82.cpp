#include <iostream>
using namespace std;

int main() {
    string str, rev = "";

    cout << "Enter string: ";
    cin >> str;

    for(int i=str.length()-1; i>=0; i--)
        rev += str[i];

    cout << "Reverse String = " << rev;

    return 0;
}