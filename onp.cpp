#include <iostream>
#include <stack>
#include <string>
using namespace std;


void reversePolishNotation(string exp) {
	stack<char> stk;
	char c, p;
	string rnp;

	for (int i = 0; i < exp.length(); i++) {
		c = exp.at(i);
		switch (c) {
		case '(' : break;

		case '+' :

		case '-' :

		case '*' :

		case '/' :

		case '^' : stk.push(c);
			break;

		case ')' : rnp += stk.top();
			stk.pop();
			break;

		default : rnp += c;
			break;
		}

	}

	while (!stk.empty()) {
		rnp += stk.top();
		stk.pop();
	}

	cout << rnp << endl;

}

int main() {
	int cases;
	cin >> cases >> ws;

	string exp;
	while (cases--) {
		getline(cin, exp);
		reversePolishNotation(exp);
	}

	return 0;
}