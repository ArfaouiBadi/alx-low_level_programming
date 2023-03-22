#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    unsigned int len;
    unsigned int cap;
    unsigned char *data;
} bigint;

void bigint_init(bigint *x) {
    x->len = 0;
    x->cap = 16;
    x->data = malloc(x->cap);
    memset(x->data, 0, x->cap);
}

void bigint_deinit(bigint *x) {
    free(x->data);
}

void bigint_copy(bigint *dst, bigint *src) {
    if (dst->cap < src->len) {
        dst->cap = src->len;
        dst->data = realloc(dst->data, dst->cap);
    }
    dst->len = src->len;
    memcpy(dst->data, src->data, src->len);
}

void bigint_add(bigint *x, bigint *y) {
    unsigned int i;
    unsigned char carry = 0;
    unsigned char *p1 = x->data;
    unsigned char *p2 = y->data;
    unsigned char *p3 = x->data;
    for (i = 0; i < x->len || i < y->len; ++i) {
        unsigned char a = i < x->len ? *p1++ : 0;
        unsigned char b = i < y->len ? *p2++ : 0;
        unsigned char c = a + b + carry;
        carry = c >> 8;
        *p3++ = c & 0xff;
    }
    if (carry) {
        *p3++ = carry;
        ++i;
    }
    x->len = i;
}

void bigint_print(bigint *x) {
    int i;
    printf("%d", x->data[x->len - 1]);
    for (i = x->len - 2; i >= 0; --i) {
        printf(", %03d", x->data[i]);
    }
    printf("\n");
}

int main() {
    bigint x, y, z;
    bigint_init(&x);
    bigint_init(&y);
    bigint_init(&z);

    x.data[0] = 1;
    x.len = 1;

    y.data[0] = 2;
    y.len = 1;

    bigint_print(&x);
    bigint_print(&y);

    unsigned int i;
    for (i = 2; i < 98; ++i) {
        bigint_add(&z, &x);
        bigint_copy(&x, &y);
        bigint_copy(&y, &z);
        bigint_print(&z);
    }

    bigint_deinit(&x);
    bigint_deinit(&y);
    bigint_deinit(&z);

    return 0;
}
