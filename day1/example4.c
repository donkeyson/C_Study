#include<stdio.h>

int main(void){
  int num1 = 10;
  int* ip1 = NULL;
  int** ip2 = NULL;
  int*** ip3 = NULL;
  
  ip1 = &num1;
  ip2 = &ip1;
  ip3 = &ip2;
  
  printf('%d %d %d %d\n', num1, *ip1, **ip2, ***ip3); //*로 참조한 값은 %d(정수)로 받음
  
  *ip1 = 20;
  printf('%d %d %d %d\n', num1, *ip1, **ip2, ***ip3);
  
  **ip2 = 30;
  printf("%d %d %d %d\n", num1, *ip1, **ip2, ***ip3);

  ***ip3 = 40;
  printf("%d %d %d %d\n", num1, *ip1, **ip2, ***ip3);
  
  return 0;
}
