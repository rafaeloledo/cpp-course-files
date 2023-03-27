#include <iostream>
#include <sstream>

using namespace std;

class Date {
  public:
    int day, month, year;

  Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
  }

  string toString () {
    stringstream s;

    s << day << "/" << month << "/" << year;

    return s.str();
  }
};

int main () {
  Date d1 = Date(1, 1, 1970);

  cout << d1.toString() << endl;

  return 0;
}
