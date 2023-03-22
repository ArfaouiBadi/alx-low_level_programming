#include <stdio.h>

int main() {
    int sum = 0;
    int fib1 = 1;
    int fib2 = 2;

    while (fib2 <= 4000000) {
        if (fib2 % 2 == 0) {
            sum += fib2;
        }
        int tmp = fib2;
        fib2 += fib1;
        fib1 = tmp;
    }

    printf("%d\n", sum);

    return 0;
}
