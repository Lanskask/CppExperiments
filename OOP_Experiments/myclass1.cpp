//
// Created by 1 on 09.03.2017.
//

#include "myclass1.h"

myclass1::myclass1(int somedata) : somedata(somedata) {
    this->somedata = somedata;
}

int myclass1::getSomedata() const {
    return somedata;
}

void myclass1::setSomedata(int somedata) {
    myclass1::somedata = somedata;
}
