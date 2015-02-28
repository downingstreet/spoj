#include <iostream>
using namespace std;

int factorial(int val) {
    int count = 0;
    for (int i = 5; val / i > 0; i = i * 5) {
        count = count + val / i;
    }
    return count;
}



int main() {

    int cases, a;
    cin >> cases;

    while(cases--) {
        cin >> a;
        cout << factorial(a) << endl;
    }

    return 0;
}