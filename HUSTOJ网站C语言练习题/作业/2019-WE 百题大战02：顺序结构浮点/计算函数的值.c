/*
 * 计算函数的值
 * 分子是 x 的跟 + 2x
 * 分母是 x - 5。
 * 输入x
 * 是双精度浮点数
 * 输出y的值
 * 结果保留3位小数
 */

#include <stdio.h>
#include <math.h>

int main(void) {

  double y , x;

  scanf("%lf" , &x);
  y = (sqrt(x) + 2 * x) / (x - 5);

  printf("%.3lf" , y);

  return 0;
}
