#include <stdio.h>

int main() {
    long long a, b, c;

    // Nhập ba số nguyên a, b, c
    if (scanf("%lld %lld %lld", &a, &b, &c) == 3) {
        long long max = a;

        if (b > max) {
            max = b;
        }
        if (c > max) {
            max = c;
        }

        // Xuất số lớn nhất
        printf("%lld\n", max);
    }

    return 0;
}