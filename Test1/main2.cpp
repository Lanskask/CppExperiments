//
// Created by a1 on 04.12.2017.
//
#include <cstdio>
#include "main2.h"

void swap(int *x, int *y);

int main() {
    int i, j;
    i = 10; j = 20;
    int *i_r = &i;
    int *j_r = &j;
    printf("Before swap: i=%i, j=%i", i, j);

    swap(&i, &j);

    printf("\nAfter swap: i=%i, j=%i", i, j);
    return 0;
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}