#include <iostream>

using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; ++i) {

        for (int j = 1; j <= n - i; ++j) {
            cout << "  ";
        }

        int num = i;
        for (int j = 1; j <= i; ++j) {
            cout << num << " ";
            num++;
        }


        num -= 2;
        for (int j = 1; j < i; ++j) {
            cout << num << " ";
            num--;
        }


        cout << endl;
    }

    return 0;
}