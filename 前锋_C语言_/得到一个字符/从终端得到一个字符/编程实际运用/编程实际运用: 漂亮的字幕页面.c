/*
 * 7.02 IPP_Simple_Game.c
 *
 * A Simple Game Start
 *
 * 编译:
 * gcc 7.02 IPP_Simple_Game.c -l curses
 */

/*
 * box():     在窗口的边缘绘制一个框
 * stdscr():  和标准输入 stdin
 *              标准输出 stdout 概念一样
 *            它就是电脑屏幕
 * move():    与窗口相关联的光标移动到指定的行、列
 * waddstr(): 在 stdscr 上打印字符串
 * refresh(): 对逻辑屏幕的改动
 *            在物理屏幕 (显示器) 上显示出来
 */

#include <conio.h>
#include <curses.h>

int main(void) {

  // 定义所需的变量
  char *str = "God丶HC bless you!";
  int offset = strlen(str) / 2;

  // 设计页面
  initscr();
  box(stdscr , ACS_VLINE , ACS_HLINE);
  move(LINES / 2 , COLS / 2 - offse);
  waddstr(stdscr , str);
  refresh();
  // 输入一个字符
  getch();
  // 关闭页面
  endwin();

  return 0;
}
