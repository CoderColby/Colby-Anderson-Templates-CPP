#include <iostream>
using namespace std;

// For doubles and floats that do not need rounding
template <typename T>
T half(T num) {
  return num / 2;
}

// For integers that need rounding
int half(int num) {
  return num / 2 + num % 2; // I add 1 if 'num' is odd to simulate rounding since integer division always rounds down
}

int main() {
  // Test cases
  double a = 7.0; // Change me
  float b = 5.0f; // Change me
  int c = 3; // Change me

  cout << half(a) << endl;
  cout << half(b) << endl;
  cout << half(c) << endl;
}