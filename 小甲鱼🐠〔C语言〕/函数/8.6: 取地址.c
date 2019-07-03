/*
 * 用数组元素作实参时
 * 则进行址传递
 * 将数组首地址(数组名)
 * 第一个元素的地址
 * 传到函数形参
 */

#include <stdio.h>

// 声明有参函数 test()
void test(int b[10]);

int main(void) {

  // 定义数组 a
  int a[10] = {
    2 , 4 , 6 , 8 , 10 , 12 , 14 , 16 , 18 , 20
  };

  // 调用函有参数 test()
  test(a);
  // 输出换行
  putchar('\n');

  return 0;
}

// 定义有参函数 test()
void test(int b[10]) {

  // 开始循环输出
  for (int i = 0; i < 10; i++) {
    printf("%d " , b[i]);
  }
}
