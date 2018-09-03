#include <iostream>

using namespace std;

class MyMoney {
public: 
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

  void showAll() {
    cout << "Name: " << name << endl;
    cout << "money: " << money << endl;
    cout << "Rate: " << rate << endl;
    cout << "Time " << time << endl;
    cout << "Result " << getMoney() << endl;
  }

};