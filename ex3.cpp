#include <iostream>
#include <string>

using namespace std;

int power(int num, int base) {
  int result = 1;
  for (int i = 0; i < base; i++) {
    result *= num;
  }
  return result;
}

int main() {
  int num;
  int base;
  cout << "Enter a number: ";
  cin >> num;
  cout << "Enter the base: ";
  cin >> base;
  cout << "Result: " << power(num, base) << endl;
}
