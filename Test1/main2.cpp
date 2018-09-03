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
  // MyMoney myMoney;
  // myMoney.name = "Peter";
  // myMoney.money = 1000;
  // myMoney.rate = 8;
  // myMoney.time = 5;
  // myMoney.showAll();

  MyMoney ob1, ob2;
  ob1.setAll("Martin", 1000, 8, 5);
  ob2.setAll("Mell", 1200, 7, 4);

  ob1.showAll();
  cout << endl;
  ob2.showAll();
  cout << endl;
  cout << "------" << endl;

  // name
  ob1.setAll("Martin 2");
  ob1.showAll();
  cout << endl;

  // time
  ob1.setAll(10);
  ob1.showAll();
  cout << endl;

  // begin money
  ob1.setAll(1200.0);
  ob1.showAll();
  cout << endl;

  // begin money 2
  ob1.setAll(1500.0, true);
  ob1.showAll();
  cout << endl;

  // rate
  ob1.setAll(6, false);
  ob1.showAll();
  cout << endl;

  // money, rate, time
  ob1.setAll(1000, 8, 5);
  ob1.showAll();
  cout << endl;

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