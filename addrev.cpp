#include <iostream>
using namespace std;


int reverse(int val) {
    int rem;
    int rev = 0;
    while (val > 0) {
        rem = val % 10;
        val = val / 10;
        rev = rev * 10 + rem;
    }

    return rev;
}

int main() {

    int cases;
    cin >> cases;

    int a;
    int b;
    int c;
    while (cases--) {
        cin >> a >> b;
        a = reverse(a);
        b = reverse(b);
        c = a + b;
        cout << reverse(c) << endl;
    }

    return 0;
}

