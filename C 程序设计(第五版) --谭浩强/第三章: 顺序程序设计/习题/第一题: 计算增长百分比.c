/*
 * exercise
 *
 * 假如我国国民生产总值的年增长率为 7% 
 * 计算 10 年后 我国国民生产总值与现在相比增长多少百分比
 */

#include <stdio.h>

int main(void) {

  double r = 0.07 , years , p , multiple;  // 定义　增长率　, 念书 , 倍数
  p = (1 + 0.07) * 10;                     // 计算现在相比的倍数
  p *= 100;                                // 计算增长率

  printf("multiple = %4.0lf%\n" , p);      // 输出增长率

  return 0;
}
