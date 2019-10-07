/*
 * statment.h
 *
 * 实现声明函数
 */

/*
 * main.cpp 和 definition.cpp
 * 都包含了 statment.h 头文件
 * 这意味着 Operator
 * 类被声明了两次
 * 这显然没有必要
 * 如果它是一个结构
 * 声明两次还将
 * 导致编译器报错
 * 所以可以使用
 * 预处理语句解决
 */

/*
 * 如果没有
 * 定义 STATMENT_H
 * 那么就执行 endif
 * 之前代码
 */
#ifndef STATMENT_H

// 定义常量标识符 STATMENT_H
#define STATMENT_H

// 定义类 Operator
class Operator {

private:
  // 定义变量
  int molecule;
  int denominator;
  int result;

  // 声明函数 Normalize
  void Normalize();

public:
  // 声明构造函数
  Operator();

  // 声明构造函数
  Operator(int leftValue , int rightValue);

  // 重载 '+' 运算符
  Operator operator + (Operator temp);

  // 重载 '-' 运算符
  Operator operator - (Operator temp);

  // 重载 '*' 运算符
  Operator operator * (Operator temp);

  // 重载 '/' 运算符
  Operator operator / (Operator temp);

  // 声明函数 Print
  void Print();

  // 声明析构函数
  ~Operator();

};

/*
 * 结束 #ifndef STATMENT_H
 * 和 endif 中的代码
 */
#endif
