#include <iostream>
using namespace std;
int main() {
  int x{5}, y{2};
  double a{0}, z{10.0};
  a = z + x/y;
  cout << "a의 값은" << a << "입니다" << endl; // a = 12.0
  return 0;
}