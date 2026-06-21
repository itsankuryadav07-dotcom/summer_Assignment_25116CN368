#include <iostream>
using namespace std;

int main() {
    string str1, str2;

    cin >> str1 >> str2;

    if(str1.length() == str2.length() && 
       (str1 + str1).find(str2) != string::npos)
        cout << "String is rotation";
    else
        cout << "String is not rotation";

    return 0;
}