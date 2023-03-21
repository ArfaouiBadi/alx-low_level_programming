#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
        printf("+%d", n);
        return 1;
    } else if (n < 0) {
        printf("-%d", -n);
        return -1;
    } else {
        printf("0");
        return 0;
    }
}}
