#include <iostream>
using namespace std;

int main() {
    int n = 4;


    for (int i = 1; i <= n; ++i) {

        for (int j = 1; j <= i; ++j) {
            cout << j << "\t";
        }
        for (int j = 1; j <= 2 * (n - i) - 1; j++) {
            cout << "*" << "\t";
        }
        // for (int j = (i == n ? i - 1 : i); j >= 1; --j) {
        //     cout << j << "\t";
        //}
        // int num = (i == n ? i - 1 : i);
        // for (int j = 1; j <= i; j++) {
        //     cout << num << "\t";
        //     num--;

        // }
        int num = (i == n ? i - 1 : i);
        for (int j = 1; j <= i; j++) {
            if (num > 0) {
                cout << num << "\t";
            }
            num--;
        }
        cout << endl;
    }
    return 0;
}