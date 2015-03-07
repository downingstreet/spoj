#include <iostream>
#include <map>
#define MAX 1000000000

using namespace std;


map<unsigned long long, unsigned long long> arr;

unsigned long long max (unsigned long long a, unsigned long long b) {
	return a > b ? a : b;
}

unsigned long long func(unsigned long long n) {
	if (n == 0)
		return 0;
	if (arr[n] == 0) {
		arr[n] = max(n, func(n / 2) + func(n / 3) + func(n / 4));
	}
	return arr[n];
}


int main() {
	unsigned long long n;
	int cases = 0;
	while ( cases < 10 && cin >> n) {
		++cases;
		cout << func(n) << endl;

	}
	return 0;
}