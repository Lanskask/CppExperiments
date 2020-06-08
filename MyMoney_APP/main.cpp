#include <cstdio>
#include "Distance.cpp"
#include "MyMoney.cpp"

// Declarations
void swap(int *x, int *y);

void fun_with_swap();

void fun_with_Distance();

void some_print();

void my_money_run();

// void postman();
void print_enum();

enum week {
    Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};

// local obj creating
void postman() {
    MyMoney objD("Postman Coven", 200, 3, 2);
}

int main() {
//    fun_with_swap();
    // fun_with_Distance();
    // some_print();
    // my_money_run();

    MyMoney objA;
    MyMoney objB("Uncle Fedor", 1200, 6, 9);
    postman();

    // Creating of dynamic obj
    MyMoney *objC = new MyMoney("Ball Dog", 1200, 6, 9);

    cout << "All objcts created" << endl;

    // Deleting of dynamic obj
    delete objC;

    cout << "End of the program" << endl;

    // print_enum();

    return 0;
}

void print_enum() {
    week today;
    today = Wednesday;

    cout << "||||||||||||||||||" << endl;
    cout << "Day " << today + 1 << endl;
    cout << "||||||||||||||||||" << endl;
}

void my_money_run() {
    MyMoney myMoney{"Peter",  1000, 8, 5};
    cout << myMoney << endl;

    MyMoney ob1, ob2;
    ob1 = MyMoney("Martin", 1000, 8, 5);
    ob2 = MyMoney("Mell", 1200, 7, 4);

    cout << ob1 << endl;
    cout << ob2 << endl;
    cout << "------" << endl;

    // name
    ob1.setAll("Martin 2");
    cout << ob1 << endl;
    cout << endl;

    // time
    ob1.setAll(10);
    cout << ob1 << endl;
    cout << endl;

    // begin money
    ob1.setAll(1200.0);
    cout << ob1 << endl;
    cout << endl;

    // begin money 2
    ob1.setAll(1500.0, true);
    cout << ob1 << endl;
    cout << endl;

    // rate
    ob1.setAll(6, false);
    cout << ob1 << endl;
    cout << endl;

    // money, rate, time
    ob1.setAll(1000, 8, 5);
    cout << ob1 << endl;
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

    cout << "\ndist1: ";
    dist1.show_dist();
    cout << "\ndist2: ";
    dist2.show_dist();
    cout << "\ndist3: ";
    dist3.show_dist();
    cout << "\n";
}

void fun_with_swap() {
    int i, j;
    i = 10;
    j = 20;
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