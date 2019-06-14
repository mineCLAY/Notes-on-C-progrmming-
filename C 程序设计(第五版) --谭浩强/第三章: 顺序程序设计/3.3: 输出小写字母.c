/*
 * Example: 给定一个大写字母
 * 要求用小写字母输出
 */

#include <stdio.h>

int main(void) {

  char ch = 'A';       // 将字符 'A' 的 ASCLL 代码放到 ch 变量中
  ch = ch + 32;        // 得到字符 'a' 的 ASCLL 代码 , 放到新的 ch 中

  printf("%c\n" , ch); // 输出 ch 的值 , 是一个字符
  printf("%d\n" , ch); // 输出 ch 的值 , 是字符 'a' 的 ASCLL 代码

  return 0;
}
