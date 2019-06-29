/*
 * 重构: 闪电盲打霹雳指
 *
 * 11.08 Hakcer_Coding_Original.c
 *
 * Hacker Coding
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
/*
 * 将原来的 curses 库给去掉了
 * 自己写一个
 */
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include <assert.h>

// 自己写的 库函数(头文件)
int getch(void) {

  // store original settings
  struct termios org_opts;
  int ret = tcgetattr(STDIN_FILENO , &org_opts);
  assert(0 == ret);

  // set new terminal parms
  struct termios new_opts;
  memcpy(&new_opts , &org_opts , sizeof(new_opts));
  new_opts.c_lflag &= ~(ICANON|ECHO | ECHOE | ECHOK |
                        ECHONL | ECHOPRT | ECHOKE | ICRNL);
  tcsetattr(STDIN_FILENO , TCSANOW , &new_opts);

  int c = getchar();

  // restore original settings
  ret = tcsetattr(STDIN_FILENO , TCSANOW , &org_opts);
  assert(0 == ret);

}

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
  // initscr(); 不需要它了
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
  // endwin(); 不需要它了

  //  关闭流 fp 防止内存泄漏
  fclose(fp);

  // 加个 BGM
  system("afplay 中二病.mp3 &");
  // 直接让他编译
  system("gcc Hacker_Coding.c -o dimond");
  system("./dimod");

  return 0;
}
