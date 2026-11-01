
#include <stdio.h>
#include "intlist.h"

int main(void) {
    IntList L;
    int score;

    list_init(&L);

    printf("Enter student scores (-1 to stop)\n");

    while (1) {
        printf("Score: ");
        scanf("%d", &score);

        if (score == -1)
            break;

        if (!list_append(&L, score)) {
            printf("List is full!\n");
            break;
        }
    }

    int count = list_size(&L);
    int total = list_sum(&L);

    printf("\nNumber of students: %d\n", count);
    printf("Total score: %d\n", total);

    if (count > 0) {
        printf("Average score: %.2f\n",
               (double)total / count);
    } else {
        printf("Average score: 0.00\n");
    }

    return 0;
}
