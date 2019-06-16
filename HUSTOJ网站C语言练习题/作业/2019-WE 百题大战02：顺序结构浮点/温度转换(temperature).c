/*
 * 输入华式温度 f
 * 输出对应的摄氏温度 c
 * 保留3位小数
 * 提示转换公式:
 * C = 5 * (f - 32) / 9
 * 提示
 * 温度是浮点数
 */

#include <stdio.h>

int main(void) {

  float F , C;            // 定义单精度浮点数 华氏度 和 摄氏度
  scanf("%f" , &F);       // 用户输入的值存入变量 F (华氏度)
  C = 5 * ((F - 32) / 9); // 计算 摄氏度

  printf("C = %.3f\n" , C); // 输出 摄氏度   

  return 0; 
}
