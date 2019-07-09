/*
 * 用函数调用
 * 实现字符串的复制
 *
 * (1) 用字符数组作参数
 * (2) 形参用字符指针变量
 */

// 形参用字符指针变量

#include <stdio.h>

// 定义函数 type
int copy(char *string) {

  // 定义需要赋值的数组
  char like[128];
  // 定义循环所需变量
  int i;

  // 循环复制数组 string[] 中的字符串
  for (i = 0; *(string + i) != '\0'; i++) {
    // 开始复制字符串
    like[i] = *(string + i);
  }

  // 将最后加上 '\0' 起到结束的作用
  like[i] = '\0';
  // 输出字符串
  puts(like);

}

int main(void) {

  // 定义存储字符串的数组
  char string[128] = "HU , I like you.";

  // 调用函数
  copy(string);

  return 0;
}

#if 0

// 用字符数组作参数

#include <stdio.h>

// 定义函数 copy()
int copy(char string[128]) {

  // 定义需要赋值的数组
  char like[128];
  // 定义循环所需变量
  int i;

  /*
   * 循环复制数组 string[]
   * 中的字符串
   * 并赋给数组 like[]
   */
  for (i = 0; string[i] != '\0'; i++) {
    // 开始复制字符串
    like[i] = string[i];
  }

  // 将最后加上 '\0' 起到结束的作用
  like[i] = '\0';
  // 输出字符串
  puts(like);

}

int main(void) {

  // 定义储存字符串的数组
  char string[128] = "HU , I like you.";

  // 调用函数
  copy(string);

  return 0;
}

#endif
