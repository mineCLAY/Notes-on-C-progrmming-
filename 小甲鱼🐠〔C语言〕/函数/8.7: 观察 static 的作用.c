/*
 * 对其进行单步跟踪
 * 观察其 static 的作用
 * 该小程序考察静态局部变量的值
 */

#include <stdio.h>

// 定义函数 f()
int f(int a) {

  // 声明动态变量 a
  auto int b = 0;
  // 声明静态变量 b
  static int c = 3;

  // b == 1 , 1 , 1
  b += 1;
  // c == 4 , 5 , 6
  c += 1;

  // 将相加结果返回 main 主函数
  return (a + b + c);
  // 7 ,  8 , 9
}

int main(void) {

  // 定义所需变量
  int a = 2 , i;

  for (i = 0; i < 3; i++) {
    // 调用函数 f()
    printf("%d\n" , f(a));
  }

  return 0;
}
