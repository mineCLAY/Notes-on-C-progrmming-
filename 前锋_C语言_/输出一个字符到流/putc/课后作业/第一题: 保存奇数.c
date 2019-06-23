/*
 * 键盘输入 1 ~ 100
 * 把数字字符 '1'、'3'、'5' 等
 * 奇数保存到文件中
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(void) {

  // 定义文件流 fp
  FILE *fp;
  fp = fopen("putc.out" , "w+");

  if (NULL == fp) {
    fprintf(stderr , "fopen error: %s\n" , strerror(errno));
    exit(EXIT_FAILURE);
  }

  // 定义所需的字符变量
  char ch = '1';

  /*
   * 开始循环
   * 因为 '0' ~ '9'
   * 的 ASCLL 码为 48 ~ 57
   * 而其它的 ASCLL 是其它字符
   * 用户输入的是 ASCLL 码的 1 ~ 100
   * 所以这样就行了
   * 真的
   * (其实我就是算不出来 '1' ~ '100' 的 ASCLL 码罢了)
   */
  while ((48 <= ch) && (ch <= 57)) {
    // 判断 ch 是否为奇数
    if (0 != ch % 2) {
      putc(ch , fp);
      putc('\n' , fp);
    }
    ++ch;
  }

  return 0;
}
