/*
 * 边写一个小程序
 * 将输入的大写字母转换为小写字母
 * 输入的小写字母转换为大写字母
 * 要求用位操作完成转换过程
 */

#include <stdio.h>

int main(void) {

  // 定义所需函数
  char character;

  // 叫用户输入一个字母
  puts("Enter a letter:");
  // 将用户输入的字符赋给 character
  scanf("%c" , &character);

  // 如果输入的不是字母则执行循环
  while (!(('A' < character) && ('z' > character)) ||
   (('a' > character) && ('Z' < character))) {
    // 叫用户重新输入一个字幕
    puts("The input is not letter! Re-enter letters");
    setbuf(stdin , NULL);
    // 将用户输入的字符福赋给 character
    scanf("%*c%c" , &character , &character);
  }

  // 将字母转换
  character ^= 32;
  // 输出结果
  printf("%c" , character);

  return 0;
}
