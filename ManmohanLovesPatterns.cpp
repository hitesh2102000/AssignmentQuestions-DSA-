#include<iostream>
using namespace std;
int main() {
	int n = 6;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			for (int j = 1; j <= i; j++) {
				int num = 1;
				cout << num;
			}
		} else {
			int num = 1;
			cout << num;
			for (int k = 1; k <= i - 2; k++) {
				num = 0;
				cout << num;
			}
			num = 1;
			cout << num;



		}
		cout << endl;
	}


	return 0;
}