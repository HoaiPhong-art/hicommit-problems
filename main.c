#include <stdio.h>

int main() {
    long long distance, order_value;

    // Nhap 2 so nguyen distance va order_value
    if (scanf("%lld %lld", &distance, &order_value) != 2) {
        return 0;
    }

    // 1. Kiem tra du lieu khong hop le
    if (distance <= 0 || order_value <= 0) {
        printf("INVALID\n");
        return 0;
    }

    // 2. Kiem tra dieu kien mien phi giao hang
    if (order_value >= 500000 && distance <= 15) {
        printf("0\n");
        return 0;
    }

    // 3. Tinh phi giao hang theo cac muc
    if (distance <= 5) {
        printf("15000\n");
    } else if (distance <= 15) {
        printf("25000\n");
    } else {
        printf("40000\n");
    }

    return 0;
}