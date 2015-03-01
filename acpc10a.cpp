#include <iostream>
using namespace std;


void progression(int a, int b, int c) {
	if ((b - a) == (c - b)) {
		int dif = b - a;
		cout << "AP " << (c + dif) << endl;
	} else {
		int ratio = b / a;
		cout << "GP " << (c * ratio) << endl;
	}
}


int main() {
	int a, b, c;
	cin >> a >> b >> c;

	while (a || b || c) {
		progression(a, b, c);
		cin >> a >> b >> c;
	}
	return 0;
}