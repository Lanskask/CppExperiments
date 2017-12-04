#include <iostream>
#include <stdio.h>

void sizes(char ch);

int main() {
    int x = 17;
    int* x_ref = &x;
    std::cout << "x_ref: " << x_ref << "; *x_ref: " << *x_ref << std::endl;

    int *y_ref = x_ref;
    std::cout << "After *y_ref = x_ref;" << std::endl;
    std::cout << "y_ref: " << y_ref << "; *y_ref: " << *y_ref << std::endl;

    char as = 'a';
    //--------------
    sizes(as);

    return 0;
}

void sizes(char ch) {
    std::cout << "sizeof(char): " << sizeof(char) << "; sizeof(ch): " << sizeof(ch) << std::endl;
}