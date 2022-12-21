#include <iostream>

// Assesses whether a year taken from user input is a leap year or not
int main() {
  int year;
  // User input
  std::cout << "Please enter a year: ";
  std::cin >> year;

  if (year < 1000 || year > 9999) {
    std::cout << "Please enter a valid year";
  }
  
  if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0) {
    std::cout << year << " - This year is a leap year\n";
  }
  else  {
    std::cout << year << " - Not a leap year\n";
  }
  
}
