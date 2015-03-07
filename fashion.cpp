#include <iostream>
#include <algorithm>
using namespace std;

void sumOfPairs(int* men, int* women, int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum = sum + men[i] * women[i];
	}
	cout << sum << endl;
}


int main() {
	int cases;
	int n;

	cin >> cases;

	while (cases--) {
		cin >> n;
		int men[n];
		int women[n];
		for (int i = 0; i < n; ++i)
			cin >> men[i];
		for (int i = 0; i < n; ++i)
			cin >> women[i];

		sort(men, men + n);
		sort(women, women + n);

		sumOfPairs(men, women, n);
	}

	return 0;
}