#include <iostream>
using namespace std;

int main() {
    int a[10][10], n;
    bool flag = true;

    cout << "Enter size of matrix: ";
    cin >> n;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> a[i][j];

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(a[i][j] != a[j][i]) {
                flag = false;
                break;
            }
        }
    }

    if(flag)
        cout << "Matrix is Symmetric";
    else
        cout << "Matrix is Not Symmetric";

    return 0;
}