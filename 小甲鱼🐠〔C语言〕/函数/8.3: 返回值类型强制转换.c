#include <stdio.h>

int main(void) {

  // 定义 max 有参函数
  int max(float x , float y);
  // 定义所需变量
  float a , b;
  int c;

  // 叫用户输入 2 个值
  puts("Enter 2 number:");
  /*
   * 将用户输入的值
   * 存入 2 个变量中
   */
  scanf("%f %f" , &a , &b);

  // 将返回的值存入变量 c 中
  c  = max(a , b);
  /*
   * 以 %d 整型类型输出
   * c 精度会丢失
   */
  printf("Max is %d\n" , c);

  return 0;
}

int max(float x , float y) {

  // z 实型变量
  float z;
  z = x > y ? x:y;

  return z;
}
