#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Khởi tạo mảng lưu các số Fibonacci
    long long f[45];
    f[1] = 1;
    f[2] = 1;

    // Tính dần từ F_3 đến F_n
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    // In ra kết quả
    cout << f[n] << endl;

    return 0;
}