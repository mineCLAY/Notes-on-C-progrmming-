/*
 * 4.08. IPP_printf.c
 *
 * 段子阅读器
 * 一个搞笑的"打鸟"的逻辑问题
 * 需要我们事先准备好搞笑文件
 */


#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(void) {

  printf("\n输入回车来查看下面的笑话!\n\n");
  printf("某日 , 老💩在课堂上想考考学生们的智商 , 就问一个男孩.\n");

  FILE *fp;
  fp = fopen("./Birds.txt" , "r");
  if (NULL == fp) {
    fprintf(stderr , "fopen: %s\n" , strerror(errno));
    exit(EXIT_FAILURE);
  }

  char *line = NULL;  // 一行字符的缓冲区
  size_t linecap = 0; // 缓冲区的容量
  size_t linelen;     // 读取字符长度
  int cnt = 0; 	      // 行数
  while ((linelen = getline(&line , &linecap , fp)) > 0) {
    getchar(); // 回车一次读取一行
    ++cnt;     // 行数记录
    if (0 == (cnt % 2)) {
      printf("学生: ");
    } else {
      printf("老💩: ");
    }
    printf("%s" , line);
  }

  // 释放缓冲区
  if (line) {
    free(line);
  }

  return 0;
}
