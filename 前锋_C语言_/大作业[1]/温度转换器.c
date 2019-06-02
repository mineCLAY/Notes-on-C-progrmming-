/*
 * 写一个程序
 * 把温度从华氏度转换为摄氏度
 * 转换公式是:
 * C = 5 / 9 * (F - 32)
 * 提示:
 * 当心整除问题
 */

#include <stdio.h>

int main(void) {
  double f , c;
  printf("input F\n");
  scanf("%lf" , &f);

  c = 5 / (9 / (f - 32));
  printf("华氏度: %lf 转换为摄氏度为: %lf\n" , f , c);
  getchar();
  return 0;
}
