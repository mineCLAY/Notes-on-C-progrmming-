/*
 * 8.02 Example_putc.c
 *
 * alpabet write
 * 大写字母
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(void) {

  // 定义文件流
  FILE *fp;
  fp = fopen("putc.out" , "wt");

  // 判断 fp 是否出错
  if (NULL == fp) {
    fprintf(stderr , "fopen error: %s\n" , strerror(errno));
    exit(EXIT_FAILURE);
  }

  // 开始循环
  for (char c = 'A'; c <= 'Z'; c++) {
    // 存放 'A' ~ 'Z' 到 putc.out 文件中
    putc(c , fp);
  }

  // 关闭流 fp 防止内存泄漏
  fclose(fp);

  return 0;
}
