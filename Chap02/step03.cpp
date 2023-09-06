/***
 * C++ 언어의 연산자를 사용하여 수식을 작성할 수 있다.
 * 비트단위 논리연산자
 * 비트단위 이동연산자
*/



/***
 * x &= y
 * x, y 모두 unsigned char형
 *  x의 하위 4비트는 그대로 두고, 상위 4비트만 모두 0으로 만드려고 한다.
 * 이때 y가 가지고 있어야 할 값과 변환된 x값을 16진수로 출력하기.
*/

// 비트 = a
// a & 0 = 0 : a가 어떤 값이든 0이다.
// a & 1 = a가 1이면 1이고, 0이면 0이다.
// 상위 4비트 0으로 바꾸기 => y = 0000
// 하위 4비트는그대로 두기 => y = 1111
// 가지고 있어야 할 y의 값 = 00001111 = 0x0f
// 변환된 a의 값= 00001010 = 0x0a

#include <iostream>
using namespace std;
int main() {
    unsigned char x = 0xfa; // 임의의 값으로 초기화
    unsigned char y = 0x0f;

    x &= y; 

    cout << "변환된 x의 값: " << hex << static_cast<int>(x) << endl;
    cout << "가지고 있어야 할 y의 값: " << hex << static_cast<int>(y) << endl;
    
    return 0;
}