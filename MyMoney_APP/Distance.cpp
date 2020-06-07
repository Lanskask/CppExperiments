//
// Created by a1 on 04.12.2017.
//

#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    Distance(): feet(0), inches(0) {}

    Distance(int ft, float in): feet(ft), inches(in) {}

    void get_dist() {
        cout << "\n Введите число фунтов: "; cin >> feet;
        cout << "\n Введите число дюймов: "; cin >> inches;
    }

    void show_dist() {
        cout << feet << "\'-" << inches << '\"';
    }
};