#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4,5, 4, 3, 1, 2};
    int size = sizeof(numbers) / sizeof(int);
    int prevNum = numbers[0]; // 이전 숫자 초기화

    for (int i = 1; i < size; i++) {
        if (numbers[i] > prevNum) {
            cout << prevNum << "to" <<  numbers[i] << endl;
        }
        prevNum = numbers[i]; // 이전 숫자 업데이트
    }

    return 0;
}

