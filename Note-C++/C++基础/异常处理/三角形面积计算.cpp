/*
 * 三角形面积计算
 */

#include <iostream>
// 数学操作
#include <cmath>
// 异常处理
#include <stdexcept>

using namespace std;

// 计算三角形面积
double area(double a , double b , double c) throw (invalid_argument) {

  // 判断三角形边长是否为正
  if (a <= 0 || b <= 0 || c <=0)
    // 抛出异常
    throw invalid_argument("The side length should be positive");

  // 判断三边长是否满足三角不等式
  if (a + b <= c || b + c <= a || c + a <= b)
    // 抛出异常
    throw invalid_argument("The side length should fit the triangle inequation");

  // 由 Heron 公式计算三角形面积
  double s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));

}

// 程序入口
int main() {

  // 三角形三边长
  double a , b , c;
  // 读取用户输入的三边长
  cin >> a >> b >> c;

  // 尝试计算三角形面积
  try {

    // 调用函数计算三角形面积
    double result = area(a , b , c);

    // 输出计算结果
    cout << "Area: " << result << endl;

  } /* 异常处理 */ catch (exception &temp) {

    // 输出异常信息
    cout << "Error: " << temp.what() << endl;

  }

  cin.get();
  cin.get();

  return 0;
}
