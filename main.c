#include <stdio.h>

int main() {
    long long distance, order_value;

    if (scanf("%lld %lld", &distance, &order_value) != 2) {
        return 0;
    }

    // Sửa lại: giá trị đơn hàng chỉ không hợp lệ khi < 0 (0 vẫn hợp lệ)
    if (distance <= 0 || order_value < 0) {
        printf("INVALID\n");
        return 0;
    }

    // Miễn phí nếu đơn hàng từ 500.000đ trở lên và khoảng cách <= 15km[span_1](start_span)[span_1](end_span)
    if (order_value >= 500000 && distance <= 15) {
        printf("0\n");
        return 0;
    }

    // Tính phí theo các mức khoảng cách[span_2](start_span)[span_2](end_span)
    if (distance <= 5) {
        printf("15000\n");
    } else if (distance <= 15) {
        printf("25000\n");
    } else {
        printf("40000\n");
    }

    return 0;
}