/*
 * 5.03 Example_fscanf.c
 *
 * 判断用户输入的是否为整数
 * 如果是则输出
 * 否则提示错误
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  printf("input an integer:\n");
  int i;
  if (fscanf(stdin , "%d" , &i)) {
    printf("The integer read was: %d\n" , i);
  } else {
    fprintf(stderr , "Error reading an integer from stin");
    exit(EXIT_FAILURE);
  }

  return 0;
}
