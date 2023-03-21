#include <stdio.h>

int sum_multiples_3_5(int n);

int main(void) {
    // Test the function with the given example:
    printf("%d\n", sum_multiples_3_5(10)); // Output: 23

    // Compute and print the sum for n=1024:
    printf("%d\n", sum_multiples_3_5(1024));

    return 0;
}

int sum_multiples_3_5(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}
