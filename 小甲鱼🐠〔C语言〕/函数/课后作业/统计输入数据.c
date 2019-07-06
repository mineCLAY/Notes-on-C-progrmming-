/*
 * 编写一个用来统计输入的
 * 各个数字、
 * 空白符(换行符、制表符、换行符)
 * 以及所有其他字符出现次数的程序
 * 分别存储在变量
 * num[10] blank others
 * 里边打印并出来
 */

#include <stdio.h>

int main(void) {

  // 定义所需变量
  int number = 0;
  int blank = 0;
  int others = 0; 
  char c;

  // 叫用户数入一个字符串
  puts("Enter a string:");
  // 开始循环计算用户输入的字符
  for (; EOF != (c = getchar());) {
    // 判断有几个数字
    if (('1' == c) || ('2' == c) ||  ('3' == c) || ('4' == c) || ('5' == c) || ('6' == c) || ('7' == c) || ('8' == c) || ('9' == c))
      number++;
    // 判断有几个空字符
    else if ((' ' == c) || ('\t' == c) || ('\n' == c)) {
      blank++;
      // 如果是换行符则
      if ('\n' == c)
        // 退出循环
        break;
    }
    else
      others++;
  }

  printf("digital: %d\n" , number);
  printf("NULL character: %d\n" , blank);
  printf("others character:%d\n" , others);

  return 0;
}
