/*
 * definition.cpp
 *
 * 定义 (实现) 头文件
 * statment.h 中
 * 声明的类的函数
 */

// 导入函数库 iostream
#include <iostream>
// 导入函数库 stdlib
#include <cstdlib>
/*
 * 导入自己创建的
 * 头文件 statment
 */
#include "..//Header//statment.h"

using namespace std;

/*
 * 定义函数 Normalize
 * 实现对分数的简化处理
 *
 * 1. 只允许分子为负数
 *    如果分母为负数
 *    则把负数挪到分子部分:
 *    如 1 / -2 == -1 / 2
 * 2. 利用欧几里德算法
 *    (辗转求余原理)
 *    将分数进行简化:
 *   2 / 10 => 1 / 5
 */
void Operator::Normalize() {

  // 判断分母是否为负数
  if (denominator < 0) {

    // 确保分母为正
    molecule = -molecule;
    denominator = -denominator;

  }

  // 欧几里德算法
  int a = abs(molecule);
  int b = abs(denominator);

  // 求出最大公约数
  while (b > 0) {

    // 定义临时变量
    int temp;

    // 交换
    temp = a % b;
    a = b;
    b = temp;

  }

  // 分子和分母分别除以最大公约数得到最简化分数
  (*this).molecule /= a;
  (*this).denominator /= a;

}

/*
 * 定义构造函数
 * 构成重载
 */
Operator::Operator() {

  // ctor

}

Operator::Operator(int leftValue , int rightValue) {

  // 给相应变量赋值
  molecule = leftValue;
  denominator = rightValue;

  // 调用函数
  Normalize();

}

/*
 * 重载 '+' 运算符
 *
 * 分数加法:
 * M1  M1   M1 * N2   M2 * N1    M1 * M2 + M2 * N1
 * - + - = ------- + ------- = ------------------
 * N1  N2   N1 * N2   N1 * N2         N1 * N2
 */
Operator Operator::operator + (Operator temp) {

  // 定义变量
  int M1 = (*this).molecule;
  int M2 = temp.molecule;
  int N1 = (*this).denominator;
  int N2 = temp.denominator;
  int tempMolecule;
  int tempDenominator;

  // 计算分数
  tempMolecule = M1 * N2 + M2 * N1;
  tempDenominator = N1 * N2;

  /*
   * 将新建的对象
   * 此内存在栈中
   * 的副本返回
   */
  return Operator(tempMolecule , tempDenominator);
}

/*
 * 重载 '-' 运算符
 *
 * 分数减法:
 * M1  M2  M1  -M2
 * - - - = - + -
 * N1  N2  M1  M2
 *
 * 所以这样可以简便
 * 因为最后运算符可以
 * 是 '+' 运算符
 * 所以可以把减数
 * 分子加上负号
 *
 * 如果分子是正数
 * 则变为负数
 * 如果分子是 0 则不变
 * 如果分子是负数
 * 则负负得正
 */
Operator Operator::operator - (Operator temp) {

  /*
   * 如果分子是正数
   * 则变为负数
   * 如果分子是 0 则不变
   * 如果分子是负数
   * 则负负得正
   */
  temp.molecule = -temp.molecule;

  /*
   * 先调用重载后的 '+'
   * 运算符
   * 后来返回结果
   */
  return operator + (temp);
}

/*
 * 重载 '*' 运算符
 *
 * 分数乘法:
 * M1  M2  M1 * M2
 * - * - = -------
 * N1  N2  N1 * N2
 */
Operator Operator::operator * (Operator temp) {

   // 定义变量
   int tempMolecule;
   int tempDenominator;

   // 计算分数
   tempMolecule = (*this).molecule * temp.molecule;
   tempDenominator = (*this).denominator * temp.denominator;

   /*
    * 将新建对象
    * 此内存在栈中
    * 的副本返回
    */
   return Operator(tempMolecule , tempDenominator);
}

/*
 * 重载 '/' 运算符
 *
 * 分数除法:
 * M1  M2  M1  N2
 * - / - = - * -
 * N1  N2  N1  M2
 *
 * 所以这样可以简便
 * 因为计算时要将除数反转
 * 运算符变为 '*'
 * 运算符
 * 所以可以使用重载后的
 * '*' 运算符
 */
Operator Operator::operator / (Operator temp) {

  // 定义变量
  int exchange;

  // 除数分子和分母交换
  exchange = temp.molecule;
  temp.molecule = temp.denominator;
  temp.denominator = exchange;

  /*
   * 先调用重载后的 '+'
   * 运算符
   * 后来返回结果
   */
  return operator * (temp);
}

// 定义函数 Print
void Operator::Print() {

  /*
   * 判断分子是否
   * 能被分母整除
   */
  if (0 == molecule % denominator) {

    // 输出
    cout << "result: " << molecule / denominator << endl;

  } else {

    // 输出分数
    cout << "result: " << molecule << " / " << denominator << endl;

  }

}

// 定义析构函数
Operator::~Operator() {

  // dtor

}
