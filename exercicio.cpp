#include <iostream>

using namespace std;

class Product {

  public:
    string name;
    double price, discount;


  double finalPrice() {
    return price - (price * discount);
  }
};


int main () {
  Product p1;

  p1.name = "Notebook";
  p1.price = 1600.45;
  p1.discount = 0.15;

  cout << p1.name << endl;
  cout << p1.price << endl;
  cout << p1.discount << endl;
  cout << p1.finalPrice() << endl;

  return 0;
}
