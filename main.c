#include <stdio.h>

int main() {
    int n;

    // Nhap so nguyen n
    if (scanf("%d", &n) == 1) {
        // Kiem tra n chia het cho 2
        if (n % 2 == 0) {
            printf("CHAN\n");
        } else {
            printf("LE\n");
        }
    }

    return 0;
}