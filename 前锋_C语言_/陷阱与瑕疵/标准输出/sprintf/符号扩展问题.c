/*
 * 12.02 Traps_sprintf.c
 *
 * 打印短整型 -1 的内存 16 进制表示形式
 */

#include <stdio.h>

int main(void) {

  // 定义所需变量
  char str[256];
  short si = -1;

  /*
   * 将变量 si 的值
   * 转换为 16 进制
   * 并存入 str 中
   * 函数无法通过 %X
   * 知道调用参数之前
   * 是 4 个字节
   * 还是 2 个字节
   * 所以采取了统一
   * 4 个字节的处理的方式
   * 导致参数 si 扩展成 32 位的整数 -1
   * 打印宽度 4 就不够了
   * 所以就打印了全部内容
   */
  sprintf(str , "%04X" , si);
  // 输出变量 str 的字符串
  puts(str);

  // 所以改成 unsigned short 型的
  unsigned short usi = -1;
  sprintf(str , "%04X" , usi);
  puts(str);

  return 0;
}
