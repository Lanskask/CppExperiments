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
        s *= (1 + rate/100);
    }
    return s;
  }

public:
  void showAll() {
    cout << "Name: " << name << endl;
    cout << "money: " << money << endl;
    cout << "Rate: " << rate << endl;
    cout << "Time " << time << endl;
    cout << "Result " << getMoney() << endl;
  }

  void setAll(string n, double m, double r, int t) {
    name = n;
    money = m;
    rate = r;
    time = t;
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
    if(s) {
      money = x;
    } else {
      rate = x;
    }
  }

};