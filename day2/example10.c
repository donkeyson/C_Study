#include <stdio.h>
#include <stdlib.h>
#include <string.h> //memset 함수가 선언된 헤더 파일

int main() {
  long long *numPtr = malloc(sizeof(long long)); //long long의 크기 8바이트만큼 동적 메모리 할당
  
  memset(numPtr, 0x27, 8); //numPtr이 가리키는 메모리를 8바이트만큼 0x27로 설정
  
  printf('0x%11x\n', *numPtr); //0x2727272727272727: 27이 8개 들어감 
  
  free(numPtr);
  
  return 0;
}
