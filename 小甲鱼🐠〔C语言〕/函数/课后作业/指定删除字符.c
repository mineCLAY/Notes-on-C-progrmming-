/*
 * 有一个字符串
 * 内有若干个字符
 * 要求输入一个字符
 * 程序便将字符串中该字符删去
 * 用外部函数实现
 */

#include <stdio.h>
#include <string.h>

int main(void) {

  // 声明函数 Delete
  int Delete(char string[] , char ch);

  // 定义所需变量
  char *real_str , string[100] , ch;

  // 叫用户输入一个字符串
  puts("Enter a string:");
  // 将用户输入的字符串赋赋值
  scanf("%[^\n]" , &string);

  // 叫用户输入要删除的字符
  puts("Enter the character to Delete:");
  // 将用户输入的字符赋给变量 ch
  scanf("%*c%c" , &ch , &ch);

  // 输出原文
  putchar('\n');
  printf("original: ");
  puts(string);

  // 输出修改后的字样
  printf("After modification: ");

  /*
   * 调用函数
   * 进行删除
   * 将结果返回值
   * 赋给指针变量
   */
  real_str = Delete(string , ch);

  // 输出结果
  puts(real_str);

  return 0;
}

// 定义函数 Delete
int Delete(char string[] , char ch) {

  // 设置中间变量
  char temp[100];
  int j = 0;

  // 循环判断是否有这个字符
  for (int i = 0; i < 100; i++) {
    // 判断是否有这个字符
    if (ch == string[i]) {
      // 执行下一个循环
      continue;
    }

    // 进行存储
    temp[j] = string[i];
    // 让 j 自加
    j++;
  }

  // 将结果返回 main 主函数
  return temp;

}
