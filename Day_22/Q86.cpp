#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int count = 0;
    bool word = false;

    for(char ch : str) {
        if(ch != ' ' && !word) {
            count++;
            word = true;
        }
        else if(ch == ' ') {
            word = false;
        }
    }

    cout << "Words = " << count;

    return 0;
}