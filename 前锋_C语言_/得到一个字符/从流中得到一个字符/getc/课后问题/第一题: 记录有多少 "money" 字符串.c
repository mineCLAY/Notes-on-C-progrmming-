/*
 * 从一个文件中读取内容
 * 记录文件中有多少个
 * "money" 字符串
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(void) {

  // 将一个字符串写入 getc.out
  system("echo \"You like money , but I don't like money.\" >getc.out");

  FILE *fp;
  fp = fopen("getc.out" , "r");

  // 判断是否能打开
  if (NULL == fp) {
    fprintf(stderr , "fopen error: %s\n" , strerror(errno));
  }
    // 如果能打开
    int c = 0;
    int n;

    do {
      c = getc(fp);
      if ('money' == c) ++n; // 记录有几个 "money" 字符串
      if ('q' == c) break;
    } while (EOF != c);

  // 关闭流 fp 防止内存泄露
  fclose(fp);
  printf("File contains %d \"money\"\n" , n);

  return 0;
}
