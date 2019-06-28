/*
 * 11.08 Hakcer_Coding_Original.c
 *
 * Hacker Coding
 */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <curses.h>
#include <string.h>

int main(int argc , char *argv[]) {

  if (argc < 2) {
    fprintf(stderr , "Uage: %s <filename>\n" , argv[0]);
    // 关闭程序
    exit(EXIT_FAILURE);
  }

  FILE *fp;
  if (NULL == (fp = fopen(argv[1] , "r"))) {
    fprintf(stderr , "fopen: %s\n" , strerror(errno));
    // 关闭程序
    exit(EXIT_FAILURE);
  }

  // 设置窗口
  initscr();
  // 开始循环读取用户输入的数据
  do {
    int c = fgetc(fp);
    if (feof(fp)) {
      break;
    }
    getch();
    printf("%c" , c);
  } while(1);
  // 关闭窗口
  endwin();

  //  关闭流 fp 防止内存泄漏
  fclose(fp);

  return 0;
}
