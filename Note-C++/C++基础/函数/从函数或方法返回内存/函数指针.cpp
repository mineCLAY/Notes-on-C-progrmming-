/*
 * 函数指针
 */

// 导入函数库 iostream
#include <iostream>

using namespace std;

// 声明函数 fun
int fun(int , int);

int main() {

  // 定义要相比较的变量
  int a;
  int b;
  // 声明函数指针
  int (*pointer)(int , int);

  // 叫用户输入一个数
  cout << "Enter one number: ";
  // 将用户输入的数赋给变量
  cin >> a;

  /*
   * 给函数指针 pointer 赋值
   * 让它指向函数 fun
   */
  pointer = fun;

  // 叫用户输入十个数字
  cout << "Enter ten number: ";

  // 开始循环
  for (int i = 0; i < 10; i++) {

    //
    cin >> b;
    /*
     * 通过指针变量 pointer
     * 调用函数 fun
     */
    a = (*pointer)(a , b);

  }

  // 输出最大值
  cout << "The max number is: " << a << endl;

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  cin.get();
  cin.get();

  return 0;
}


/*
 * 定义函数 fun
 * 实现判断最大值
 */
int fun(int x , int y) {

  // 定义存储结果的变量
  int max;

  /*
   * 使用三目运算符
   * 判断出最大值
   */
  max = (x > y) ? x : y;

  return max;
}
