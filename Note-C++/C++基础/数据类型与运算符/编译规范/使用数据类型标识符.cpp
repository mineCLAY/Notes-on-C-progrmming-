/*
 * 使用数据类型标识符
 */
#include <iostream>
// 导入函数库 stdio
#include <cstdio>
// 导入函数库 math
#include <cmath>

using namespace std;

int main(void) {

  /*
   * 用 typedef 将 string 
   * 的性质赋给 new_string
   * 称为自定义类型
   */
  typedef string new_string;

  /*
   * 用具有 string 型的
   * 标识符 new_string
   * 定义变量 mine
   */
  new_string mine = "I'm GOD";

  /*
   * size_t 原型:
   * typedef unsigned int
   * 所以
   * size_t unsignedNumber
   * 等于定义了一个五符号整型
   */
  size_t unsignedNumber;

  /*
   * INT_MAX 的原型:
   * #define INT_MAX 2147483647
   * 宏定义 INT_MAX 为
   * 2147483647
   * 所以下面语句的作用是
   * 打印 int 型表示的最大值
   */
  cout << INT_MAX << endl;

  // 定义整型变量
  int num1 = 0000 , num2 = 0000;
  // 打印
  cout << num1 << " I'm GOD\n"
       << num2 << " I'm GOD" << endl;
  // 用 printf 打印
  printf("%d\n" , num1);

  // 定义浮点型变量
  float num = 12345.12345678;
  /*
   * 输出 12345.1
   * 因为 float 有效精度
   * 是 6 ~ 7 位
   */
  cout << num << endl;

  /*
   * 已知圆柱体的半径和高
   * 求圆柱体的体积
   */

  // 定义了一个 float 类型的常量
  const float PI = 3.14f;
  // 常量无法重新赋值
  // PI = 3.15;

  // 定义求圆柱体体积的变量
  float radius = 4.5f;
  float height = 4.5f;

  /*
   * 定义一个变量存储
   * 计算后的圆柱体体积
   */
  double volume = PI * pow(radius , 2) * height;
  // 打印圆柱体体积
  cout << "体积是: " << volume << endl;

  return 0;
}
