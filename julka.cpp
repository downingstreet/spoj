#include <iostream>
#include <string>

using namespace std;

//string total = 3 4 9 1
//             0 1 2 3

void apples(string t, string e) {
	int kla, nat;

	int total[t.length()];
	int extra[t.length()];
	int result[t.length()];

	int j = 0;

	for (int i = t.length() - 1; i >= 0; --i) {
		total[j] = t[i] - '0';
		++j;
	}

	j = 0;
	for (int i = e.length() - 1; i >= 0; --i) {
		extra[j] = e[i] - '0';
		++j;
	}

	cout << j << endl;

	if (t.length() > e.length())
		while (j != t.length())
			extra[++j] = 0;


	for (int i = 0; i < t.length(); ++i) {
		if (total[i] > extra[i])
			result[i] = total[i] - extra[i];
		else {
			result[i] = total[i] + 10 - extra[i];
			if (total[i + 1] != 0)
				total[i + 1] = total[i + 1] - 1;
	
		}

	}



	for (int i = 0; i < t.length(); ++i)
		cout << total[i];

	cout << endl;

	for (int i = 0; i < t.length(); ++i)
		cout << extra[i];

	/*nat = (total - extra) / 2;
	kla = total - nat;

	cout << kla << endl;
	cout << nat << endl;
	cout << " ___ " << endl;*/
}


int main() {
	int cases = 10;
	string total;
	string extra;

	while (cases--) {
		cin >> total;
		cin >> extra;

		apples(total, extra);
	}


	return 0;
}