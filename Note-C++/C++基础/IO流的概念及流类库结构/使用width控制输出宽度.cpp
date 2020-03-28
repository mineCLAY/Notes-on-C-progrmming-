/*
 * 使用 width 控制输出宽度
 */

#include <iostream>

int main(int argc, char const *argv[]) {

  // 定义数组
  double values[] = { 1.23 , 3.45 , 666.233 , 0.666 };
  // 输出数组
  for (short i = 0; i < 4; i++) {

    // 控制宽度为 10
    std::cout.width(10);
    // 输出数组元素
    std::cout << values[i] << std::endl;

  }

  std::cin.get();

  return 0;
}
