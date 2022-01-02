#include<stdio.h>

int main(void) {
  char* cp = NULL; //*는 포인터
  int* ip = NULL;
  
  printf('%u &u\n', sizeof(char*), sizeof(int*)); //%u는 부호없는 10진수
  printf('%u %u\n', sizeof(cp), sizeof(ip));
  
  printf('%p %p\n', &cp, cp); //%p는 포인터의 주소
  printf('%p %p\n', &ip, ip);
  
  return 0;
}
