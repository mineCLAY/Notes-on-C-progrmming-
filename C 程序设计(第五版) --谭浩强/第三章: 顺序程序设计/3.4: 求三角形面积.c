/*
 * Example 给出三角形的三边长
 * 求三角形面积
 */

#include <stdio.h>
#include <math.h> 

int main(void) {

  double a , b , c , s , area;                        // 定义各变量 , 均为 double 型
  a = 3.67;                                           // 对边长 a 赋值
  b = 5.34;                                           // 对边长 b 赋值
  c = 6.21;                                           // 对边长 c 赋值
  s = (a + b + c) / 2;                                // 计算 s
  area = sqrt(s * (s - a) * (s - b) * (s - c));       // 计算 area

  printf("a = %lf\tb = %lf\tc = %lf\n" , a , b , c);  // 输出三边 a , b , c 的值
  printf("area = %lf\n" , area);                      // 输出面积 area 的值

  return 0;
}
