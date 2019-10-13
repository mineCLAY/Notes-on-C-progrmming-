/*
 * 容器 (Container)
 */

#include <iostream>
/*
 * 因为要使用 string
 * 类型所以导入函数库
 * string
 */
#include <string>
/*
 * 因为要使用 vector
 * 所以导入函数库
 * vector
 */
#include <vector>

using namespace std;

int main(int argc , char const *argv[]) {

  /*
   * 使用向量定义 string
   * 类型变量 name
   */
  vector<string> name;

  // 向量变量传递数据
  name.push_back("GOD");
  name.push_back("God");

  /*
   * 使用向量变量成员
   * 函数 size 获取数据个数
   * 运行两次循环体
   * for 中的代码
   */
  for (int i = 0; i < name.size(); i++) {

    // 输出向量变量存储的名字
    cout << "name[" << i << "]: " << name[i] << '\n';

  }

  /*
   * 输出换行
   * 并释放缓冲区
   */
  cout << endl;

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  cin.get();

  return 0;
}
