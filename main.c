#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1 || n == 2) {
        cout << 1 << endl;
        return 0;
    }

    long long a = 1, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << b << endl;
    return 0;
}