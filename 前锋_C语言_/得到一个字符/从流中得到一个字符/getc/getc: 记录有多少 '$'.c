/*
 * 6.02 Exmple_getc.c
 *
 * Money counter
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(void) {

  system("echo \" Do you like $ , I don't like $
         .\" > getc.out"); // Linuxc & Mac 的命令行 

  FILE *fp;
  fp = fopen("getc.out" , "r");

  if (NULL == fp) { // 如果无法打开文件
    fprintf(stderr , "fopen error: %s\n" ,
           strerror(errno)); // 输出错误信息
    exit(EXIT_FAILURE); // 退出程序
  }

  int n = 0;
  int c;

  do {
    c = getc(fp);
    if ('$' == c) ++n;
    if ('q' == c) break;
  } while (EOF != c);

  fclose(fp);
  printf("File contains %d $\n" , n);

  return 0;
}
