/*
 * 1. 用函数求和
 * 2. 用计算求体积并打印
 *    1. 长方形
 *    2. 圆柱体
 *    3. 圆锥体
 */

#include <iostream>

using namespace std;

// 声明函数 (函数原型)
int add(int , int);
// 计算长方形的体积
void calcCuboid();
// 计算圆柱体的体积
void calcCylinder();
// 计算圆锥体的体积
void calcCone();

int main(void) {

  // 将函数返回值赋给变量 result
  // int result = add(5 , 6);

  // 函数调用
  cout << "result: " << add(5 , 6) << '\n' << endl;

  // 定义存储用户选择的变量
  int choice = -1;
  // 开始循环
  while (choice) {

    // 告诉用户选项
    cout << "1. 长方体" << '\n'
         << "2. 圆柱体" << '\n'
         << "3. 圆锥体" << endl;
    // 将用户的选择赋给变量
    cin >> choice;

    // 判断用户的选择
    switch (choice) {

    // 选项 1: 计算长方体体积
    case 1:
      // 调用函数 calcCuboid
      calcCuboid();
      // 退出选择
      break;

    // 选项 2: 计算圆柱体体积
    case 2:
      // 调用函数 calcCylinder
      calcCylinder();
      // 退出选择
      break;

    // 选项 3: 计算圆锥体体积
    case 3:
      // 调用函数 calcCone
      calcCone();
      // 退出选择
      break;

    // 默认选项: 打印输入错误
    default:
      // 打印输入错误
      cout << "Input error\n" << endl;
      // 退出选择
      break;

    }

    // 判断是否要退出
    if (-1 != choice)
      // 退出循环
      break;

  }

  return 0;
}

// 定义函数
int add(int num1 , int num2) {

  // 将计算的和返回 mian 主函数
  return num1 + num2;

}

// 定义函数求长方形体积
void calcCuboid() {

  // 定义长和宽
  double height , width , leng;
  // 叫用户输入长宽高
  cout << "Enter height , width and leng:" << endl;
  // 将用户输入的值赋给变量
  cin >> height >> width >> leng;

  // 计算并打印
  cout << "result: " << height * width * leng << endl;

}

// 定义函数求圆柱体体积
void calcCylinder() {

  // 定义半径和高
  double radius , height;
  // 叫用户输入长和高
  cout << "Enter radius and height:" << endl;
  // 将用户输入的值赋变量
  cin >> radius >> height;

  // 计算并打印
  cout << "result: " << (radius * radius) * 3.14 * height;

}

// 定义函数求圆锥体体积
void calcCone() {

  // 定义半径和高
  double radius , height;
  // 叫用户输入长和高
  cout << "Enter radius and height:" << endl;
  // 将用户输入的值赋变量
  cin >> radius >> height;

  // 计算并打印
  cout << "result: " << (radius * radius) * 3.14 * height / 3;

}
