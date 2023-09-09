/***
 * sizeof(배열이름)은 배열이 사용하는 전체 메모리 크기입니다. 원소 개수가 아닙니다.
 * 예) int arr[7]; sizeof(arr)은 몇일까요? 정답 : 28 bytes 
 * 
*/

#include <iostream>
using namespace std;


int main() {

   // for문을 이용한 배열의 원소 출력
    int myArray[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1};

    for (int i = 0; i < sizeof(myArray) / sizeof(int); i++) {
        cout << myArray[i] << " ";
    }
    cout << flush;

    /**************************/

  // for문으로 문자열 한글자씩 출력하기.
    char my_string[] = "Hello, World!"; // 배열 크기를 알아서 결정
    
    for (int i = 0; i < my_string[i] != '\0'; i++) 
    {
        cout << i << "  " << my_string[i] << endl;
     }
    cout << endl;

    // while문으로 문자열 한글자씩 출력하기.
    int i = 0;
    while (my_string[i] != '\0') {
      cout << i << "  " << my_string[i] << endl;
      i++;
    }
     cout << endl;
    return 0;

}
