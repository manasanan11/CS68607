
#include "intlist.h"

void list_init(IntList *L) {
    L->size = 0;
}

int list_append(IntList *L, int value) {
    if (L->size >= MAX_SIZE)
        return 0;

    L->data[L->size] = value;
    L->size++;
    return 1;
}

int list_get(const IntList *L, int index) {
    if (index < 0 || index >= L->size)
        return -1;

    return L->data[index];
}

int list_size(const IntList *L) {
    return L->size;
}

int list_sum(const IntList *L) {
    int sum = 0;

    for (int i = 0; i < L->size; i++) {
        sum += L->data[i];
    }

    return sum;
}

int list_find(const IntList *L, int key) {
    for (int i = 0; i < L->size; i++) {
        if (L->data[i] == key)
            return i;
    }

    return -1;
}

int list_remove_last(IntList *L, int *out) {
    if (L->size == 0)
        return 0;

    L->size--;
    *out = L->data[L->size];

    return 1;
}
