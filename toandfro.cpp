#include <iostream>
#include <string>
using namespace std;


void toAndFro(string message, int columns) {
	int rows = message.length() / columns;
	char arr[rows][columns];

	int left = 0;
	int right = -1;
	int flag = 1;

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			if (flag == 1) {
				arr[i][j] = message.at(++right);
			}
			else {
				arr[i][j] = message.at(--left);
			}

		}

		if (flag == 1) {
			if (left == 0)
				left = right + columns + 1;
			else
				left = left + 3 * columns;
		}

		if (flag == -1) {
			right = columns + right;
		}

		flag = flag * (-1);
	}

	for (int i = 0; i < columns; ++i)
	{	for (int j = 0; j < rows; ++j)
		{
			cout << arr[j][i];
		}
	}
	cout << endl;
}


int main() {
	int input;
	string message;

	cin >> input;
	while (input != 0) {
		cin >> message;
		toAndFro(message, input);
		cin >> input;
	}
	return 0;
}