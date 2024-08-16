#include <iostream>
using namespace std;
int main () {
    int n = 4;
    // cin >> n;

    int a = 0, b = 1, c;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }
        cout << endl;//
    }
    return 0;
}