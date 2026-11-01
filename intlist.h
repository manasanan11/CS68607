
#ifndef INTLIST_H
#define INTLIST_H

#define MAX_SIZE 1000

typedef struct {
    int data[MAX_SIZE];
    int size;
} IntList;

void list_init(IntList *L);
int list_append(IntList *L, int value);
int list_get(const IntList *L, int index);
int list_size(const IntList *L);
int list_sum(const IntList *L);
int list_find(const IntList *L, int key);
int list_remove_last(IntList *L, int *out);

#endif
