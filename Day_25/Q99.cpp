#include <iostream>
using namespace std;

int main() {
    string str, word = "";

    getline(cin, str);

    for(int i = str.length()-1; i >= 0; i--) {
        if(str[i] != ' ')
            word = str[i] + word;
        else {
            cout << word << " ";
            word = "";
        }
    }

    cout << word;

    return 0;
}