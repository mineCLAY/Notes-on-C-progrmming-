/*
 * 文件操作
 * 重定向版本
 *
 * 写起来简单自然
 * 但是不能同时读写文件
 * 和标准输入输出
 */

// 导入库 iostream
#include <iostream>
// 导入库 stdio
#include <cstdio>
// 导入库 stdlib
#include <cstdlib>
// 导入库 errno
#include <cerrno>

using namespace std;

int main(void) {

  // 定义输入文件名
  freopen("in.txt" , "r" , stdin);
  // 定义输出w文件名
  freopen("out.txt" , "w" , stdout);

  // 定义变量
  int temp;
  int sum = 0;

  /*
   * 循环 (连续) 读取
   * 直到全部读取完毕
   * 同样
   * cin 也是可以
   * 输入 (接受) 的
   */
  while (1 == scanf("%d" , &temp)) {

    // 累加
    sum += temp;

  }

  // 向文件输出 (写入) 数据
  puts("Program execution completed");
  cout << "sum: " << sum << endl;
  cout << "test" << endl;
  cout << "test" << endl;

  // 关闭文件流
  fclose(stdin);
  fclose(stdout);

  return 0;
}
