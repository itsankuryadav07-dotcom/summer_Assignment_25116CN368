#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    bool flag = true;

    for(char ch : str) {
        if(ch < '0' || ch > '9') {
            flag = false;
            break;
        }
    }

    if(flag)
        cout << "Only digits";
    else
        cout << "Not only digits";

    return 0;
}