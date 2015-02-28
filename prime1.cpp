#include <iostream>
#include <cmath>
using namespace std;



void prime(int first, int last) {
	int length = last - first + 2;
	int* arr = new int [length];
 
	for (int i = 1; i < length; i++) {
		arr[i] = 0;
		cout << i << " : " << arr[i] << endl;
	}

	// multiples of 2
	int j = 4;
	while (j < length) {
		arr[j] = 1;
		j = j + 2;
	}

	
	// odd nos.
	int k;
	for (int i = 3; i <= sqrt(last); i = i + 2) {
		k = 2;
		while (k < length) {
			arr[k * i] = 1;
			k = k + 1;
		}
	}

	for (int i = 2; i < length; i++) {
		if (arr[i] == 0)
			cout << i << endl;
	}

}


int main() {
	int cases, first, last;
	cin >> cases;

	while (cases--) {
		cin >> first >> last;

		prime(first, last);
	}
}