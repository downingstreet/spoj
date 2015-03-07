#include <iostream>
#include <string>
using namespace std;

bool isDivisible(long long* arr, int n) {
	unsigned long long sum = 0;
		
		for (int i = 0; i < n; ++i) {
			arr[i] = arr[i] % n;
		}

		for (int i = 0; i < n; ++i) {
			sum = sum + arr[i];
		}

		if (sum % n == 0)
			return true;
		else
			return false;
	}


	int main() {
		int cases;
		string blank;
		cin >> cases;

		int n;
		while (cases--) {

			getline(cin, blank);

			cin >> n;
			long long arr[n];

			for (int i = 0; i < n; ++i) {
				cin >> arr[i];
			}

			if (isDivisible(arr, n))
				cout << "YES" << endl;
			else
				cout << "NO" << endl;


		}

		return 0;
	}