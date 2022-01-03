#include <stdio.h>

int main() {
  int *numPtr1;
  int **numPtr2; //이중 포인터 선언
  int num1 = 10;
  
  numPtr1 = &num1; //num1의 메모리 주소 저장
  
  numPtr2 = &numPtr1; //numPtr1의 메모리 주소를 저장
  
  printf('%d\n', **numPtr2); //numPtr1의 주소를 참조하고 num1의 주소를 이중 참조해서 10을 가져옴
  
  return 0;
  
}
