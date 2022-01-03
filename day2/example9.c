#include <stdio.h>
#include <stdlib.h>

int main(){
  int *numPtr;
  
  numPtr = malloc(sizeof(int)); //메모리 할당(주소)
  
  *numPtr = 10; //포인터를 역참조한 뒤 값을 할당하기
  
  printf('%d\n', *numPtr); //역참조해서 저장된 값 10 출력
  
  free(numPtr); //동적 메모리 해제
  
  return 0;
}
