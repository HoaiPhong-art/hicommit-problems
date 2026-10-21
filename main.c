#include <stdio.h>

int main() {
    int t;

    if (scanf("%d", &t) == 1) {
        if (t < 15) {
            printf("LANH\n");
        } else if (t <= 25) { // t trong khoảng [15, 25]
            printf("MAT\n");
        } else if (t <= 35) { // t trong khoảng (25, 35]
            printf("NONG\n");
        } else {              // t > 35
            printf("RAT_NONG\n");
        }
    }

    return 0;
}