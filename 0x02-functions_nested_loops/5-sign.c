#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
      
        return "+1";
    } else if (n < 0) {
        return "-1";
    } else {
        return "00";
    }
}
