#include <iostream>
using namespace std;

void Armstrong(int n) {
    int sum = 0;
    int dup = n;

    while (n > 0) {
        int ld = n % 10;
        n = n / 10;
        sum = sum + (ld * ld * ld);
    }

    if (sum == dup) {
        cout << "Armstrong number";
    } else {
        cout << "Not an Armstrong number";
    }
}

int main() {
    int n;
    cin >> n;
    Armstrong(n);
    return 0;
}