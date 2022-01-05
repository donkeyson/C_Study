#include <stdio.h>

int main() {
  int numArr[3][4] = { //세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언
    {11, 22, 33, 44},
    {55, 66, 77, 88},
    {99, 110, 121, 132}
  };
  
  printf('%d\n', numArr[0][0]); //세로 인덱스 0, 가로 인덱스 0 < 11
  printf('%d\n', numArr[1][2]); //세로 인덱스 1, 가로 인덱스 2 < 77
  printf('%d\n', numArr[2][0]); //세로 인덱스 2, 가로 인덱스 0 < 99
  printf('%d\n', numArr[2][3]); //세로 인덱스 2, 가로 인덱스 3 < 132
  
  return 0;
}
