/*
 * 使用算法实现在
 * 输出前按字母顺序排序
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
/*
 * 因为要使用算法
 * 所以导入函数库
 * algorithm
 */
#include <algorithm>

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
  name.push_back("Hu");
  name.push_back("L");
  name.push_back("H Jw");
  name.push_back("I like her");

  /*
   * 调用函数 sort
   * 按字母顺序进行排序
   */
  sort(name.begin() , name.end());

  /*
   * 定义 i 为 0
   * 使用向量变量成员
   * 函数 size 获取数据个数
   */
  for (unsigned int i = 0; i < name.size(); i++) {

    // 输出向量变量存储的名字
    cout << "name[" << i << "]: " << name[i] << '\n';

  }

  /*
   * 使用 vector 迭代器
   * 定义变量 iter
   * 然后调用向量变量
   * 成员函数 begin
   * 返回起始位置的数据
   * 赋值给 iter
   */
  vector<string>::iterator iter = name.begin();

  /*
   * 如果 iter 的位置还未指向
   * name 最后一个
   * 元素的下一个位置
   * 则开始循环
   */
  while (name.end() != iter) {

    /*
     * 输出
     * 因为 iter 是个指针
     * 所以要用取值赋 (*)
     * 获取指针指向的数据
     */
    cout << *iter << '\n';
    ++iter;

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
