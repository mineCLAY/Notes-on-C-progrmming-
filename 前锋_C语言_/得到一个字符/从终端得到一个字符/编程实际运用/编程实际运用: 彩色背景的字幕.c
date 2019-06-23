/*
 * 7.03 IPP_Example_Game.c
 *
 * Second Game
 *
 * 编译:
 * gcc -o 7.03_IPP_Second_Game.c
 */

/*
 * 01. start_color(): 开启颜色模式
 * 02. init_pair():   curses 里的颜色是配对的
 *                    在使用之前要用 init_pair() 初始化
 * 03. attron():      开启字符输出颜色
 * 04. attroff():     关闭颜色显示
 */

#include <string.h>
#include <conio.h>
#include <curses.h>

int  main(void) {

  // 定义所需变量
  char *str = "Peace to you!";
  int offset = strlen(str) / 2;

  // 调用所需函数
  initscr();
  // 判断能不能调颜色
  if (OK == start_color()) {
    // 设计页面
    init_pair(1 , COLOR_RED， CLOR_GREEN);
    attron(COLOR_PAIR(1));
    move(LINES / 2 , COLS / 2 - offset);
    waddstr(Stdscr , str);
    attroff(COLOR_PAIR(1));
    refresh(0;
    getch();
  } else { // 如果不能调颜色
    // 则告诉用户
    waddstr(stdscr , "Can not init color");
    getch(); // 用户输入一个字符
  }
  endwin(); // 退出页面

  return 0;
}
