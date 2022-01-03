#include <stdio.h>

int main() {
  int *numPtr;
  int num1 = 10;
  
  numPtr = &num1;
  
  *numPtr = 20; //역참조 연산자로 주소에 접근해서 20을 저장
  
  printf('%d\n', *numPtr); //역참조 연산자로 메모리 주소에 접근해서 값을 가져옴. 20이 저장되어있음.
  printf('%d\n', num1); // 실제 nu1의 값도 바뀜
  
  return 0;
}
