/*
 * 圆柱体的表面积由3部分组成:
 * 上底面积、下底面积和侧面积
 * 由于上下底面积相等
 * 完整的公式可以写成:
 * 表面积 = 底面积 × 2 + 侧面积
 * 根据平面几何知识
 * 底面积=pi*r*r
 * 侧面积=2*pi*r*h
 * pi = 3.142
 * 浮点数据类型使用 double
 */

#include <stdio.h>

#define PI 3.142                             // 定义宏 Pi 为 3.142

int main(void) {

  double r , bottom_area , height , side_area; // 定义双精度变量

  scanf("%lf%lf" , &r , &height);              // 让用户输入 半径 和 高
  bottom_area = PI * r * r * 2;
  side_area = height * PI * r * 2;

  printf("area=%.3lf" ,
          bottom_area + side_area);

  return 0;
}
