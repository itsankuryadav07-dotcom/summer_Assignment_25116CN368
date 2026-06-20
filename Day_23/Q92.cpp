#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int freq[256] = {0};

    for(char ch : str) {
        freq[ch]++;
    }

    int max = 0;
    char result;

    for(int i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            result = i;
        }
    }

    cout << "Maximum occurring character = " << result;

    return 0;
}