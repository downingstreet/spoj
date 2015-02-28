#include <iostream>
using namespace std;

int *p = new int[100];
p[0] = 1;
p[1] = 1;

int factorial(int num) {
	if (p[num])
		return p[num];

	for (int i = 2; i <= num; i++ ) {
		if (p[i - 1]) {
			return i * p[i - 1];
		}
		p[i] = i * p[i - 1];
	}

}

int main() {
	int cases;
	cin >> cases;

	int number;
	
	while (cases--) {
		cin >> number;
		cout << factorial(number);
	}

	return 0;

}