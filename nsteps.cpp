#include <iostream>
using namespace std;


int numberAtXY(int x, int y) {

	int number;

	if (y == x) {
		if (x % 2 == 0)
			number = 2 * x;
		else
			number = 2 * x - 1;

		return number;
	}

	if (y == (x - 2)) {
		if (x % 2 == 0)
			number = 2 * x - 2;
		else
			number = 2 * x - 3;


		return number;
	}

	else
		return -1;
}


int main() {
	int cases;
	cin >> cases;

	int x, y, result;
	while (cases--) {
		cin >> x >> y;
		result = numberAtXY(x, y);

		if (result == -1)
			cout << "No Number" << endl;
		else
			cout << result << endl;

	}

	return 0;
}