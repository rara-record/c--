/***
 * 변수와 자료형 사용하기.
*/

#include <iostream>
using namespace std;
int main() {
  constexpr double PI {3.14};
  double radius;
  cout << "원의 반경을 입력해주세요" << endl;
  cin >> radius;
  double area = radius * radius * PI;
  cout << "원의 면적은" << area << endl;
  return 0;
}