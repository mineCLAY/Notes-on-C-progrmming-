/*
 * problem NO.TWO
 *
 * 编写一个程序帮助奶奶统计她的零钱
 * 程序要问下面的问题:
 * 有多少个
 * 一分、二分、五分、一角、五角、一元零钱
 */

#include <stdio.h>

int main(void) {

  // 定义所需变量
  int one_point , two_point , five_point;
  int Corner , Pentagonal;
  int yuan;

  // 统计一分
  puts("How many one_point:");
  scanf("%d" , &one_point);

  // 统计二分
  puts("How many two_point:");
  scanf("%d" , &two_point);

  // 统计五分
  puts("How many five_point:");
  scanf("%d" , &five_point);

  // 统计一角
  puts("How many Corner:");
  scanf("%d" , &Corner);

  // 统计五角
  puts("How many Pentagonal:");
  scanf("%d" , &Pentagonal);

  // 统计一元
  puts("How many one_yuan:");
  scanf("%d" , &yuan);

  // 输出有多少个一分
  printf("one_point: %d\n" , one_point);
  // 输出有多少个二分
  printf("two_point: %d\n" , two_point);
  // 输出有多少个五分
  printf("five_point: %d\n" , five_point);
  // 输出有多少个一角
  printf("Corner: %d\n" , Corner);
  // 输出有多少个五角
  printf("Pentagonal: %d\n" , Pentagonal);
  // 输出有多少个一元
  printf("yuan: %d\n" , yuan);

  return 0;
}
