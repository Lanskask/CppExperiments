//
// Created by a1 on 04.12.2017.
//
#include <cstdio>
//#include "main2.h"
#include "Distance.cpp"

void swap(int *x, int *y);
void fun_with_swap();
void fun_with_Distance();

int main() {
//    fun_with_swap();
    fun_with_Distance();
    return 0;
}

void fun_with_Distance() {
    Distance dist1(11, 6.24);
    Distance dist2(dist1);
    Distance dist3 = dist1;

    cout << "\ndist1: "; dist1.show_dist();
    cout << "\ndist2: "; dist2.show_dist();
    cout << "\ndist3: "; dist3.show_dist();
}

void fun_with_swap() {
    int i, j;
    i = 10; j = 20;
    int *i_r = &i;
    int *j_r = &j;
    printf("Before swap: i=%i, j=%i", i, j);

    swap(&i, &j);

    printf("\nAfter swap: i=%i, j=%i", i, j);
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}