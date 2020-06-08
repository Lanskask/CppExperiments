#include <iostream>

using namespace std;

class MyMoney {
private:
    string name;
    double money;
    double rate;
    int time;

    double getMoney() {
        double s = money;
        for (int i = 1; i <= time; i++) {
            s *= (1 + rate / 100);
        }
        return s;
    }

public:
    MyMoney(const string &name, double money, double rate, int time) : name(name), money(money), rate(rate),
                                                                       time(time) {}

    MyMoney() {
        name = "Ivan Cr R";
        money = 1000;
        rate = 5;
        time = 1;
    }

    ~MyMoney() {
        cout << "Obj for " << name << " is Deleted" << endl;
        for (int i = 0; i < 35; ++i) {
            cout << "*";
        }
        cout << endl;
    }

    friend ostream &operator<<(ostream &os, const MyMoney &money) {
        os << "name: " << money.name << " money: " << money.money << " rate: " << money.rate << " time: " << money.time;
        return os;
    }

    // Prefix
    MyMoney operator++() {
        money = money + 1000;
        return *this;
    }

    // Postfix
    MyMoney operator++(int) {
        time++;
        return *this;
    }

    MyMoney operator+(MyMoney obj) {
        MyMoney tmp;
        tmp.name = "Postman Coven";
        tmp.money = money + obj.money;
        tmp.rate = (rate > obj.rate) ? rate : obj.rate;
        tmp.time = (time + obj.time) / 2;
        return tmp;
    }

    MyMoney &operator-(const MyMoney &objY) {
        if (money > objY.money) {
            money -= objY.money;
        } else {
            money = 0;
        }
        return *this;
    }

    MyMoney &operator-(int currency) {
        if (money > currency) {
            money -= currency;
        } else {
            money = 0;
        }
        return *this;
    }

    void setAll(double m, double r, int t) {
        money = m;
        rate = r;
        time = t;
    }

    void setAll(string n) {
        name = n;
    }

    void setAll(int t) {
        time = t;
    }

    void setAll(double m, double r) {
        money = m;
        rate = r;
    }

    void setAll(double x, bool s = true) {
        if (s) {
            money = x;
        } else {
            rate = x;
        }
    }
};