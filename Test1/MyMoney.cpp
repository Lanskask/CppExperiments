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
  MyMoney() {
    name = "Ivan Cr R";
    money = 1000;
    rate = 5;
    time = 1;
    cout << "New obj is createrd" << endl;
    showAll();
  }

  MyMoney(string n, double m, double r, int t) {
    setAll(n,m,r,t);
    cout << "New obj is createrd" << endl;
    showAll(); 
  }

  ~MyMoney() {
    cout << "Obj for "<< name << " is Deleted" << endl;
    for (int i = 0; i < 35; ++i) {
      cout << "*";
    }
    cout << endl;
  }

  void showAll() {
    cout << "Name: " << name << endl;
    cout << "money: " << money << endl;
    cout << "Rate: " << rate << endl;
    cout << "Time " << time << endl;
    cout << "Result " << getMoney() << endl;
    
    for (int i = 0; i < 35; ++i) {
      cout << "-";
    }
    cout << endl;
  }

  void setAll(string n, double m, double r, int t) {
    name = n;
    money = m;
    rate = r;
    time = t;
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

  double operator-(MyMoney objX, MyMoney objY) {
    return objX.getMoney() - objY.getMoney();
  }

  // 
  MyMoney operator--(MyMoney &obj) {
    if(obj.money > 1000) {
      obj.money -= 1000;
    } else {
      obj.money = 0;
    }
    return obj;
  }

  


  /*void setAll(double m, double r, int t) {
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
  }*/


};