#include "main.h"

int sum_multiples_3_5(int n) {
int sum = 0;
int i;
for (i = 0; i < n; i++) {
if (i % 3 == 0 || i % 5 == 0) {
sum += i;
}
}
return sum;}
int main(void) {
printf("%d\n", sum_multiples_3_5(1024));
return 0;
}
