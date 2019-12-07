/*
 * 利用函数模板输出数组
 */

#include <iostream>

using namespace std;

// 定义模板
template <class Type>
// 定义输出数组的函数
Type OutputArray(Type array[] , int count) {

  // 循环输出
  for (int i = 0; i < count; i++) {

    // 输出数组元素
    cout << array[i] << ' ';

  }

  /*
   * 输出换行
   * 并释放缓冲区
   */
  cout << endl;

}

// 声明类 Test
class Test {

// 私有
private:
  // 存储 id 的变量
  int id;

// 公有
public:
  /*
   * 定义构造函数
   * 并初始化列表
   */
  Test(int thisId) : id(thisId) {

    // ctor

  }

  // 建立友元函数 (关系)
  friend ostream &operator << (ostream &output , Test &test);

  // 定义析构函数
  virtual ~Test() {

    // dtor

  }

};

// 建立友元函数 (关系)
ostream &operator << (ostream &output , Test &test) {

  // 输出当前对象的 id 值
  output << test.id;

}

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义测试数组
  int interTest[6] = { 0 , 233 , 666 , 888 , 999 , 1024 };
  double doubleTest[6] = { 0.0 , 233.3 , 666.6 , 888.8 , 999.9 , 1024.2 };
  Test test[6] = { 0.0 , 233.3 , 666.6 , 888.8 , 999.9 , 1024.2 };

  // 调用函数输出数组
  OutputArray(interTest , 6);
  OutputArray(doubleTest , 6);
  OutputArray(test , 6);
  return 0;
}
