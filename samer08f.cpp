#include <iostream>
using namespace std;

void squares(int n) {
	int result = n * (n + 1) * (2 * n + 1) / 6;
	cout << result << endl;
}

int main() {
	int input;
	cin >> input;

	while (input != 0) {
		squares(input);
		cin >> input;
	}
	return 0;
}