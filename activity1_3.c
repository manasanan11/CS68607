
#include <stdio.h>

int main() {
    unsigned char x = 250;

    printf("Initial value: %u\n", x);

    for (int i = 1; i <= 10; i++) {
        x++;
        printf("Step %d: %u\n", i, x);
    }

    return 0;
}
