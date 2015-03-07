#include <iostream>
using namespace std;

int rect(int n) {
	int length = 1;
	int breadth = 1;
	int count = 0;

	while (length <= n) {
		breadth = length;
		while (breadth <= n) {
			if (length * breadth <= n)
				count++;
			breadth++;
		}
		length++;
	}

	return count;
}


int main() {
	int n;
	cin >> n;
	cout << rect(n) << endl;

	return 0;
}