/***
 * 문자, 정수, 참/거짓, 실수를 표현하는 기본 자료형과 복합 자료형을 사용할 수 있다.
 * 값을 저장하기 위해 사용하는 변수는 사용하기 전에 자료형과 이름을 미리 선언해야 한다.
 * 
*/

#include <iostream>
using namespace std;
int main() {
  int x{5}, y{2};
  double a{0}, z{10.0};
  a = z + x/y;
  cout << "a의 값은" << a << "입니다" << endl; // a = 12.0
  return 0;
}

