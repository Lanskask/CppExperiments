#include <iostream>
#include <omp.h>

int main() {
    int myArray[6] = {};

#pragma omp parallel for reduction(+:myArray[:6])
    for (int i = 0; i < 50; ++i) {
        double a = 2.0;
        for (int n = 0; n < 6; ++n) {
            myArray[n] += a;
        }
    }

    for (int n = 0; n < 6; ++n) {
        std::cout << myArray[n] << " " << std::endl;
    }
}