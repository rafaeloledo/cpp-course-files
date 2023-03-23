#include <iostream>
#include <sstream>

using namespace std;

class Date {

public:
  int day, month, year;

  string toString() {
    stringstream ss;

    ss << day << '/' << month << '/' << year; 

    return ss.str();
  }
};

int main () {
  Date d1;

  d1.day = 22;
  d1.month = 03;
  d1.year = 2023;

  cout << d1.toString();

  return 0;
}
