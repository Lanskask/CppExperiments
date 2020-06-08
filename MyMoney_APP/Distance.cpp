#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0) {}

    Distance(int ft, float in) : feet(ft), inches(in) {}

    void get_dist() {
        cout << "\n Enter number of futes: ";
        cin >> feet;
        cout << "\n Enter number of dumes: ";
        cin >> inches;
    }

    void show_dist() {
        cout << feet << "\'-" << inches << '\"';
    }
};