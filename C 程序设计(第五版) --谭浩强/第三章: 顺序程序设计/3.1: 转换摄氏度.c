/*
 * 有人用温度计测量出用华氏法表示的温度(如 64 °F)
 * 今要求把它转换为以摄氏法表示的温度(如 17.8 °F)
 */

#include <stdio.h>

int main(void) {

  float f , c;              // 定义 f 和 c 为单精度浮点型变量
  f = 64.0;                 // 定义 f 的值
  c = (5.0 / 9) * (f - 32); // 利用公式计算 c 的值

  printf("f = %f\nc = %f\n" , 
          f , c);           // 输出 c 的值

  return 0;	
}
