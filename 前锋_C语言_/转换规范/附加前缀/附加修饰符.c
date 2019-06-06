/*
 * 2.05_Example_Optional_Prefix.c
 *
 * 附加修饰符:
 * 附加修饰符 , 用于:
 * 指定数据具体为何种精确的类型.
 * 附加修饰符有:
 * hh、h、l、ll、L.
 */

#include <stdio.h>

int main(void) {

  // 01. hh
  //     与 d、i 一起使用 , 表示一个 signed char 类型
  signed char sc = -55;
  printf("%hhd\n" , sc);

  unsigned char uc = 250;
  printf("%hhu\n" , uc);

  signed char *storage = &sc;
  printf("%s %hhn %hhd" , "God bless you\n" , storage , sc);
  printf("sc = %hhd\n" , sc);

  // 02. h
  //     表示一个 short int 或 unsigned short int
  short int emergency = 911;
  printf("%hd\n" , emergency);

  // 03. l
  //     表示一个 long int 或 unsigned long int
  long river = 6280000;
  printf("长江的长度是: %ld\n" , river);

  // 04. ll
  //     表示一个 long long int 或 unsigned long long mint
  long long population = 1374620000;
  printf("中国人口: %lld\n" , population);

  // 05. L
  //     和 a A e E f F g G 一起使用 , 表示一个 long double 类型的值
  long double distance = 384402.15;
  printf("月球与地球之间的距离是: %Lf 千米.\n" , distance);

  return 0;
}
