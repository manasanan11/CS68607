#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("=== Integer Limits ===\n");

    printf("INT_MIN : %d\n", INT_MIN);
    printf("INT_MAX : %d\n", INT_MAX);
    printf("UINT_MAX : %u\n", UINT_MAX);

    printf("\n=== Floating Point Precision ===\n");

    printf("FLT_DIG : %d\n", FLT_DIG);
    printf("DBL_DIG : %d\n", DBL_DIG);

    return 0;
}