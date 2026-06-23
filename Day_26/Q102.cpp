#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int freq[256] = {0};

    for(char ch : str)
        freq[ch]++;

    cout << "Duplicate characters:" << endl;

    for(int i = 0; i < 256; i++) {
        if(freq[i] > 1)
            cout << char(i) << endl;
    }

    return 0;
}