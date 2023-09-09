/**
 * 구조체, 클래스, 포인터 등을 사용하지 않고 간단하게 풀어볼 수 있습니다.
*/

#include <iostream>
using namespace std;


// [문제] 평균 점수 출력하기
// 다음 숫자들의 평균을 계산해서 출력해보세요. 정답: 59.8 (float로 변환해서 계산)

int main() {
  int scores[] = {20, 40, 80, 60, 99};
  float sum = 0.0f;

  // int size = sizeof(scores) / sizeof(scores[0]);

  // for (int i = 0; i < size; i++) 
  // {
  //   sum += scores[i];
  // }
  
  for (int a : scores) {
    sum += a;
  }

  float average = sum / (sizeof(scores) / sizeof(int));
    cout << average << endl;

  return 0;
}

