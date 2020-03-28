/*
 * 设置对齐方式
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

  // 输出数据
  for (int i = 0; i < 4; i++) {

    std::cout << setiosflags(std::ios_base::left) //设置左对齐
              << std::setw(6) << names[i] // 设置宽度为 6
              << resetiosflags(std::ios_base::left) // 重新设置为右对齐
              << std::setw(10) << values[i] << std::endl; // 设置宽度为 10

  }

  std::cin.get();

  return 0;
}
