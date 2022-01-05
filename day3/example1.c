#include <stdio.h>

int main() {
  int numArr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110}; //배열을 생성하고 값 할당
  
  printf('%d\n', numArr[0]); // 11 출력
  printf('%d\n', numArr[5]); // 66 출력
  printf('%d\n', numArr[9]); // 110 출력
  
  return 0;
}
