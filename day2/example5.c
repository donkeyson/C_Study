#include <stdio.h>

int main() {
  long long *numPtr1; //long long형 포인터 선언. long long은 인트형 연산에서 벗어나는 범위를 다룸
  float *numPtr2; //float 형
  char *cPtr1; //char형
  
  long long num1 = 10;
  float num2 = 3.5;
  char c1 = 'a';
  
  numPtr1 = &num1; //num1 메모리 주소 저장
  numPtr2 = &num2; //num2 메모리 주소 저장
  cPtr1 = &c1; //c1의 메모리 주소 저장
  
  printf('%lld\n', *numPtr1); //10 출력
  printf('%f\n', *numPtr2); //3.5 출력
  printf('%c\n', *cPtr1); //a 출력
  
  return 0;
}
