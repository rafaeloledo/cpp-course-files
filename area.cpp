#include <iostream>

int main () {
  std::cout << "Enter the radius: ";

  double radius;

  std::cin >> radius;
  
  double area = 3.1415 * radius * radius;

  std::cout << "The area is: " << area;
  
  return 0;
}
