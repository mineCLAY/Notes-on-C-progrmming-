/*
 * 从文件读一个二进制记录到一个结构体中
 */

#include <iostream>
// 文件流
#include <fstream>
// 字符串操作
#include <cstring>

// 定义结构体
struct SalaryInfo {

  // 成员
  unsigned id;
  double salary;

};

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义结构体对象
  SalaryInfo employeeOne = { 0 , 6666 };

  // 创建文件输出流对象
  std::ofstream os("payroll" , /* 可以不写 */ std::ios_base::out | std::ios_base::binary);

  // 写入数据
  os.write( /* 转换结构体为字符类型的指针 */ reinterpret_cast <char *> (&employeeOne) , sizeof(employeeOne));

  // 关闭输出文件流
  os.close();

  // 创建文件输入流对象
  std::ifstream is("payroll" , /* 可以不写 */ std::ios_base::in | std::ios_base::binary);

  // 判断是否打开
  if (is) {

    // 定义结构体对象
    SalaryInfo employeeTwo;
    // 读取文件的数据
    is.read( /* 将结构体转换为字符类型的指针 */ reinterpret_cast <char *> (&employeeTwo) , sizeof(employeeTwo));
    // 输出读取的数据
    std::cout << '#' << employeeTwo.id << ' ' << employeeTwo.salary << std::endl;

  } else {

  // 输出错误信息
  std::cout << "ERROR: Cannot open file 'payroll'" << std::endl;

  }

  // 关闭输入文件流
  is.close();

  std::cin.get();

  return 0;
}
