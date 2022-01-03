#inclue <stdio.h>

int main() {
  int num1 = 10;
  char c1 = 'a';
  int *numPtr1 = &num1;
  char *cPtr1 =&c1;
  
  void *ptr;  //void 포인터 선언
  
  ptr = numPtr1; //void 포인터에 int 포인터 저장
  ptr = cPtr1; //void 포인터에 char 포인터 저장
  
  numPtr1 = ptr; //int 포인터에 void 포인터 저장
  cPtr1 = ptr; //char 포인터에 void 포인터 저장
  
  //void 포인터는 역참조할 수 없다.
  
  return 0;
  
}
