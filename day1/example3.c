#include<stdio.h>

int main(void){
  int num1 = 10;
  int* ip = NULL;
  int** ipp = NULL;
  
  ip = &num1;
  ipp = &ip;
  
  printf('%d %p %p\n', num1, ip, ipp); //주소 값을 반환할 경우 &p를 사용
  printf('%p %p %p\n', &num1, &p, &ipp);
  printf('%d %p %p\n', *&num1, *&ip, *&ipp); //num1외의 변수들은 주소값을 두 번 반한한 뒤 첫번째 주소값을 참조
  printf('%d %d %d\n', num1, *ip, **ipp);
  printf('%p %p %p\n', &num1, ip, *ipp);
  
  return 0;
}
