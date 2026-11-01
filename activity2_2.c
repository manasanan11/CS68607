#include <stdio.h>
#include <stddef.h>

int main(void) {
    char c;
    int i;
    double d;
    int a[5];

    printf("Address of c   : %p\n", (void *)&c);
    printf("Address of i   : %p\n", (void *)&i);
    printf("Address of d   : %p\n", (void *)&d);

    for (int j = 0; j < 5; j++) {
        printf("Address of a[%d] : %p\n", j, (void *)&a[j]);
    }

    printf("Size of int: %zu bytes\n", sizeof(int));

    return 0;
}