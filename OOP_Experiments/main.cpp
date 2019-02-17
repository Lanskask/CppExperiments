#include <iostream>
#include "myclass1.h"

using namespace std;

int main() {
    myclass1 mcl(10);
    myclass1 mc1_2(20);
    cout <<  "Some data from myCl 10: " << mcl.getSomedata() << endl;

    cout << mcl.getSomedata() + mc1_2.getSomedata() << endl;

    return 0;
}