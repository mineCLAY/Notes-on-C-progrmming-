/*
 * 01. 创造一个变量 , 赋值并打印.c
 *
 * 			a. 创建一个变量
	*								并给它赋一个值(任何值都行).
	* 							然后使用 printf 显示这个变量.
	*				b. 改变这个变量
 *      可以用一个新值替换原来的值
 *      或者将原来的值增加某个变量.
 *      使用 printf 显示这个变量.
 *   c. 创建一个变量
 *      赋给它一个字符.
 *      然后使用 printf 显示这个变量.
 */

#include <stdio.h>

int main(void) {

  // a.
  char *str = "MineHC 666";
  printf("%s\n" , str);

  // b.
  *str = "MineHC is GOD";
  printf("%s\n" , str);

  // c.
  char ch = 'C';
  printf("%c\n" , ch);

  /*
   * 让程序停一下
   * 不会立刻闪退
   */
  getchar();
  return 0;
}
