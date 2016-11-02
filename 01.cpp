#include <iostream>

using namespace std;

/** 
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */

int biggerOrEqual(int array[], int length) {
  int number;
  for(int i = 0; i < length; i++) {
    if(array[i] < number) {
      return false;
    }
  }
	return true;
}

int main() {
  int array[] = {3, 2, 4, 6, -1};
  int length = sizeof(array)/sizeof(int);
  int number;
  cout << "Give a number" << endl;
  cin >> number;
  cout << biggerOrEqual(array, length);
  return 0;
}

