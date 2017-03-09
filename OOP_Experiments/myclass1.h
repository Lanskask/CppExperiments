//
// Created by 1 on 09.03.2017.
//

#ifndef UNTITLED_MYCLASS1_H
#define UNTITLED_MYCLASS1_H

#include <iostream>
using namespace std;

class myclass1 {
    int somedata;

public:
    myclass1();

    myclass1(int somedata);

    void setdata(int d)
    {
        this->somedata = d;
    }

    void showdata()
    {
        cout << "Значение поля равно" <<
             this->somedata << endl;
    }

    int getSomedata() const;

    void setSomedata(int somedata);
};


#endif //UNTITLED_MYCLASS1_H
