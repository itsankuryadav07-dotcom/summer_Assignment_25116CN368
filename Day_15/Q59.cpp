#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> k;

    k = k % n;

    while(k--)
    {
        int temp = arr[n-1];

        for(int i = n-1; i > 0; i--)
            arr[i] = arr[i-1];

        arr[0] = temp;
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}