#include<iostream>
using namespace std;
int main() {
	int n = 5;

	for (int i = 1; i <= n; i++) {
		int num = i;
		for (int j = 1; j <= i; j++) {

			cout << num << " ";
		}
		int z = i + 1;
		for (int k = 1; k <= n - i; k++) {
			cout << z << " ";
			z++;
		}
		cout << endl;
	}
	cout << endl;

	// cin >> n;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (j >= i) {
				cout << j << " ";
			} else {
				cout << i << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
