#include <stdio.h>

int main(void) {

  /*
   * 对被调用函数 add 的声明
   * 注意:
   * 如果将 自定义 函数
   * 放到 main 主函数之前
   * 可以不用再声明
   */
  float add(float x , float y);
  // 定义所需变量
  float a , b , c;

  // 叫用户输入 2 个数
  puts("Enter 2 number:");
  // 将用户输入的值赋给变量 a 和 b
  scanf("%f %f" , &a , &b);

  // 将调用函数 add 的值赋给变量 c
  c = add(a , b);
  // 输出结果
  printf("sum if %f\n" , c);

  return 0;
}

/*
 * 定义函数 add
 * 函数首部
 */

float add(float x , float y) {

  // 函数体
  float z;
  // 将 x(a) + y(b) 的值赋给 z
  z = x + y;

  // 返回 z 的值
  return z;
}
