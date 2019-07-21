/*
 * Example_enum_1.c
 *
 * 说明枚举的增值
 */

#include <stdio.h>

int main(void) {

  // 定义枚举类型 weekday
  enum weekday {
    sun , mon , tue , wed ,
    thu , fri , sat
  }
  // 定义枚举变量
  a , b , c;

  // 给变量赋初值
  a = sun;
  b = mon;
  c = tue;

  // 输出三个变量的值
  printf("%d\t%d\t%d\n" ,
          a , b , c);

  return 0;
}
