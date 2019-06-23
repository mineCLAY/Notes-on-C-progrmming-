/*
 * 7.01 Example_getch.c
 *
 * A very simple example of curses programming
 * 翻译:
 * gcc 7.01 Example_getch.c -l curses
 */

/*
 * 01. initscr(): 初始化屏幕
 *                开始进入 curses 图形工作方式
 * 02. getch():   从窗口读入一个字符
 *                屏幕会停止一下
 * 03. endwin():  结束 curses
 *                恢复原来的屏幕
 */

#include <stdio.h>
#include <curses.h>
#include <conio.h>

int mai(void) {

  initscr(0 ;
  char c = getch();
  endwin();

  // 输出结果
  printf("你输入的是:: %c\n" , c);

  return 0;
}
