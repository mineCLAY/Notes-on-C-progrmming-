/*
 * 6.04 Example_ungetc.c
 */

/*
 * 从标准输入读取的字符将转换为整数
 * 并累加
 * 遇到非数字字符时结束
 */

#include <stdio.h>
#include <ctype.h>

// 定义一个函数
int read_int(void) {

  // 定义转换整数的变量
  int value = 0;
  int ch;

  while ((ch = getchar() != EOF) && (isdigit(ch))) {
    value += ch - '0';
  }

  /*
   * 非数字字符返回到流中
   * 所以这个字符也没有弃掉
   */

  return value;
}

// 主函数 main 开始
int main(void) {

  printf("输入一些数字:\n");

  // 定义一个变量 result 等于返回的函数 read_int()
  int result = read_int();

  // 输出喝结果
  printf("你输入的数据总和是: %d\n" , result);

  return 0;
}
