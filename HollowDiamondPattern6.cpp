#include <iostream>
using namespace std;
int main() {
	int n = 5;
	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < n - i - 2; j++) {
			cout << "*" << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << " " << " ";
		}
		for (int j = 0; j < n - i - 2 ; j++) {
			if (j == 0 && i == 0) {}
			else {
				cout << "*" << " ";
			}


		}
		cout << endl;
	}
	return 0;
}