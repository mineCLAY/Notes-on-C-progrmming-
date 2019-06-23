/*
 * 8.03 Example_fputc.c
 */

#include <stdio.h>
#include <string.h>

int main(void) {

  // 定义指针变量 str
  char *str = "Tune your ears to the world of Wisdom; set you heart on a life of Understanding";
  /*
   * 名言
   * 翻译:
   * 把你的耳朵调到智慧的世界; 让你的心在理解生活
   */

  // 开始循环 直到读取完变量 str
  for (int i = 0; i < strlen(str); ++i) {
    fputc(str[i] , stdout);
  }

  // 输出名言
  fputc('\n' , stdout);

  return 0;
}
