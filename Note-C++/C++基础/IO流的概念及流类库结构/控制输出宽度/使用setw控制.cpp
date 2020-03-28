/*
 * 使用 setw 操纵符指定宽度
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

    // 控制宽度后输出
    std::cout << std::setw(6) << names[i]
         << std::setw(10) << values[i] << std::endl;

  }

  std::cin.get();

  return 0;
}
