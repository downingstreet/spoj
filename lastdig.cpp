#include <iostream>
using namespace std;


void lastDigit(int a, long long b) {
	if (b != 0) {

		int arr[10][4] = {{0, 0, 0, 0},
			{1, 1, 1, 1},
			{2, 4, 8, 6},
			{3, 9, 7, 1},
			{4, 6, 4, 6},
			{5, 5, 5, 5},
			{6, 6, 6, 6},
			{7, 9, 3, 1},
			{8, 4, 2, 6},
			{9, 1, 9, 1}
		};

		int q = a % 10;
		int p = b % 4;
		if (p == 0)
			p = 3;
		else
			p = p - 1;


		cout << arr[q][p] << endl;
	}
	cout << 1 << endl;

}

int main() {
	int cases, a;
	long long b;
	cin >> cases;
	while (cases--) {
		cin >> a >> b;
		lastDigit(a, b);
	}

	return 0;
}