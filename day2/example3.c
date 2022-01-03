#include <stdio.h>

int main() {
  int *numPtr;
  int num1 = 10;
  
  numPtr = &num1;
  
  printf('%d\n', *numPtr); //역참조 연산자(*)로 num1의 메모리 주소에 접근해서 값을 가져옴
  
  return 0;
}
