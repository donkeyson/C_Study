#include <stdio.h>
#include <stdlib.h> //malloc, free 함수가 선언된 헤더 파일

int main() {
  int num1 = 20;
  int *numPtr1;
  
  numPtr1 = &num1; //num1의 메모리 주소를 numPtr1에 할당
  
  int *numPtr2;
  
  numPtr2 = malloc(sizeof(int)); //int의 크기 4바이트만큼 동적 메모리 할당
  
  printf('%p\n', numPtr1); //num1의 메모리 주소를 출력
  
  printf('%p\n', numPtr2); //새로 할당된 메모리 주소 출력
  
  free(numPtr2); //동적으로 할당된 메모리 해제
  
  return 0;
}
