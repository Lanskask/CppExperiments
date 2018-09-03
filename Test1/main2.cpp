//
// Created by a1 on 04.12.2017.
//
#include <cstdio>
//#include "main2.h"
#include "Distance.cpp"
#include "MyMoney.cpp"

void swap(int *x, int *y);
void fun_with_swap();
void fun_with_Distance();
void some_print();
void my_money_run();

int main() {
//    fun_with_swap();
  // fun_with_Distance();
  // some_print();
  my_money_run();
  return 0;
}

void my_money_run() {
  MyMoney myMoney;
  myMoney.name = "Peter";
  myMoney.money = 1000;
  myMoney.rate = 8;
  myMoney.time = 5;
  myMoney.showAll();
}

void some_print() {
  int a;
  int *p_a = &a;

  a = 5;

  cout << "p_a: " << p_a << "\n";
  cout << "*p_a: " << *p_a << "\n";
  cout << "&p_a: " << &p_a << "\n";
}

void fun_with_Distance() {
    Distance dist1(11, 6.24);
    Distance dist2(dist1);
    Distance dist3 = dist1;

    cout << "\ndist1: "; dist1.show_dist();
    cout << "\ndist2: "; dist2.show_dist();
    cout << "\ndist3: "; dist3.show_dist();
    cout << "\n";
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