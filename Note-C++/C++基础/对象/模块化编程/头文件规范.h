/*
 * 头文件规范
 *
 * 1. 创建日期
 *    文件用途
 *    创建姓名
 *    最后一次修改日期
 *    有什么限制和前提条件等第
 *
 * 2. 头文件里的类和函数也应该有注释
 */

/*
 * Rational.h
 *
 * 这个头文件声明了有理数类
 * (RationalClass)
 * 类里面对四则运算进行重载
 * 以实现分数运算
 */

#include <iostream>

/*
 * 定义类 RationalClass
 * 实现对四则运算进行重载
 */
class RationalClass {

// 公有
public:
  /*
   * 定义构造函数
   * 实现对相应变量赋值
   */
  RationalClass(int num , int denom);

  // 重载 '+' 运算符
  RationalClass operator + (RationalClass rhs);
  // 重载 '-' 运算符
  RationalClass operator - (RationalClass rhs);
  // 重载 '*' 运算符
  RationalClass operator * (RationalClass rhs);
  // 重载 '/' 运算符
  RationalClass operator / (RationalClass rhs);

// 私有
private:
  /*
   * 定义函数 normalize
   * 负责对分数的简化处理
   */
  void normalize();

  // 定义存储分子的变量
  int numerator;
  // 定义存储分母的变量
  int denominator;

  /*
   * 定义函数
   * 实现重载 '<<' 运算符
   * 与函数建立友元关系
   */
  friend std::ostream &operator << (std::ostream os , RationalClass f);

};
