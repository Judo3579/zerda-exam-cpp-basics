#include <iostream>

using namespace std;

/** 
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please mutliply the total variable by 5 with it.
 */

float multiplyValue(float* number, float a) {
  *number = number * a;
  return 0;
}

int main() {
  float total = 123;
  cout << multiplyValue(&total);
  return 0;
}

