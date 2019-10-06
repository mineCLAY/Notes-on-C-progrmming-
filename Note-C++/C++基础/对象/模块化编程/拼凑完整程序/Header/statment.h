/*
 * statment.h
 *
 * 实现声明函数
 */

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
