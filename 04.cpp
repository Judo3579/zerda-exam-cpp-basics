#include <iostream>

using namespace std;

/** 
 * Create a function that takes an integer and returns how many divisors it has
 */

int divisors(int number) {
  for(int divisor = 1; divisor <= number; ++divisor) {
    if(number % divisor == 0) {
      cout << divisor << endl;
    }
  }
    return number;
}

int main() {
  int number;
  cout << "give a number:" << endl;
  cin >> number;
  cout << divisors(number);
  return 0;
}

