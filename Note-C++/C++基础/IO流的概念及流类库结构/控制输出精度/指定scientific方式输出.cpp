/*
 * 控制输出精度 (指定 fixed)
 */

#include <iostream>
// 字符串控制
#include <string>
// 输入输出操纵器
#include <iomanip>

int main(int argc, char const *argv[]) {

  // 定义数组
  double values[] = { 1.23 , 3.45 , 666.233 , 0.666 };
  std::string names[] = { "Room" , "Bai YangQian" , "LOL" , "WangZheRongYao" };

  // 指定 fixed (科学计数法) 输出
  std::cout << setiosflags(std::ios_base::scientific);

  // 输出数据
  for (int i = 0; i < 4; i++) {

    std::cout << setiosflags(std::ios_base::left) //设置左对齐
              << std::setw(6) << names[i] // 设置宽度为 6
              << resetiosflags(std::ios_base::left) // 清除左对齐设置
              << std::setw(10) << std::setprecision(1) << values[i] << std::endl; // 设置小数位为 1

  }

  std::cin.get();

  return 0;
}
