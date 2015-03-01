#include <iostream>
using namespace std;

int moves(int *arr, int size) {
	long long sum = 0;

	for (int i = 0; i < size; ++i)
	{
		sum = sum + arr[i];
	}

	if (sum % size == 0) {
		long long avg = sum / size;
		long long count = 0;
		for (int i = 0; i < size; ++i) {
			if (arr[i] > avg)
				count = count + arr[i] - avg;
		}
		return count;
	}
	return -1;
}


int main() {
	int packets = 0;
	int i = 0;
	cin >> packets;

	while (packets != -1) {

		int arr[packets];
		for (int i = 0; i < packets; ++i)
		{
			cin >> arr[i];
		}

		cout << moves(arr, packets) << endl;
		cin >> packets;
	}

	return 0;
}