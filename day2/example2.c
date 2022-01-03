#include <stdio.h>

int main(){
  int *numPtr; //포인터 변수를 선언
  int num1 = 10; //int 변수를 선언하고 10 저장
  
  numPtr = &num1; //num1의 메모리 주소를 포인터 변수에 저장
  
  printf('%p\n', numPtr); //numPtr의 값 출력, 즉 메모리 주소가 출력됨
  printf('%p\n', &num1); //위와 같은 값 출력, num1의 메모리 주소 출력
  //컴퓨터마다, 실행할 때마다 값이 달라짐
  
  return 0;
}
