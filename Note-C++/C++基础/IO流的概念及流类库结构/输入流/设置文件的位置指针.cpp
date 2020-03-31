/*
 * 用 seekg 函数设置位置指针
 */

#include <iostream>
// 文件流
#include <fstream>
// 字符串操作
#include <cstring>

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义数组
  int values[] = { 0 , 1 , 2 , 3 , 4 , 5 , 666 };

  // 创建文件输出流对象
  std::ofstream os("payroll" , /* 可以不写 */ std::ios_base::out | std::ios_base::binary);

  // 写入数据
  os.write( /* 转换结构体为字符类型的指针 */ reinterpret_cast <char *> (values) , sizeof(values));

  // 关闭输出文件流
  os.close();

  // 创建文件输入流对象
  std::ifstream is("payroll" , /* 可以不写 */ std::ios_base::in | std::ios_base::binary);

  // 判断是否打开
  if (is) {

    // 调用 seekg 函数设置位置指针
    is.seekg(3 * sizeof(int));

    // 定义存储数组元素的变量
    int result;
    // 读入数据赋值给 result
    is.read( /* 转换结构体为字符类型的指针 */ reinterpret_cast <char *> (&result) , sizeof(int));

    // 输出结果
    std::cout << "The 4th integer in the file 'payroll': " << result << std::endl;

  } else {

    // 输出错误信息
    std::cout << "ERROR: Cannot open file 'payroll'" << std::endl;

  }

  // 关闭输入文件流
  is.close();

  std::cin.get();

  return 0;
}
