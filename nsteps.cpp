#include <iostream>
using namespace std;


void numberAtXY(int x, int y) {
	if (y != x || y != (x - 2))
		cout << "No Number";
	
	if (y == x) {

	}

	if (y == (x - 2)) {

	}
}


int main() {
	int cases;
	cin >> cases;

	while(cases--) {
		cin >> x >> y;
		numberAtXY(x,y);
	}

	return 0
}