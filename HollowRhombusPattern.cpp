#include<iostream>
using namespace std;
int main()
{
    int n = 5, i, j;
    for (i = 0; i < n - 1; i++) {
        cout << " ";
    }
    for (i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    for (i = 0; i < n - 2; i++) {
        for (j = i; j < n - 2; j++) {
            cout << " ";
        }
        cout << "*";
        for (j = 0; j <= n - 3; j++) {
            cout << " ";
        }
        cout << "*" << endl;;
    }

    for (i = 0; i < n; i++) {
        cout << "*";
    }

    return 0;
}