#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strcpy 함수가 선언된 헤더 파일

struct Person { //구조체 정의
  char name[20];
  int age;
  char address[100];
};

int main () {
  struct Person p1; //구조체 변수 선언
  
  //구조체 접근하여 값 할당
  strcpy(p1.name, '홍길동'); //문자열 복사
  p1.age = 30;
  strcpy(p1.address, '서울시 용산구 한남동');
  
  //구조체 접근하여 값 출력
  printf('이름:%s\n', p1.name);
  printf('나이:%d\n', p1.age);
  printf('주소:%s\n', p1.address);
  
  return 0;
}
