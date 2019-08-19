/*
 * 地址作为函数参数传递数据
 *
 * 1. 加 const 修饰符
 *    使参数值不可修改
 *
 * 2. 二维数组作为参数
 *
 * 3. 函数指针作为参数
 *
 * 4. 自定义计算机
 *    使用函数指针
 */

#include <iostream>

using namespace std;

// 声明函数 (函数原型)
int add(const int (*)[3] , int);
void print(const int *);
int pow(int , int);

// 实现加法
double addition(double , double);
// 实现减法
double subtraction(double , double);
// 实现乘法
double multiplication(double , double);
// 实现除法
double division(double , double);
// 输出计算结果
void printResult(double (*)(double , double) , double , double);

// 程序入口
int main(void) {

  // 定义变量
  int const_num = 0;

  // 调用函数 print
  print(&const_num);

  // 定义二数组
  int num[2][3] = {

    { 0000 , 1 , 2 } ,
    { 3 , 4 , 5 }

  };

  /*
   * 调用函数 add
   * 将其返回值赋给变量
   */
  int result = add(num , 2);

  // 打印 result
  cout << '\n' << result << endl;

  // int pow(int , int);

  /*
   * 声明函数指针
   * - ptrPow;
   *   int * ptrInt;
   */
  int (*ptrPow)(int , int);
  // 让函数指针指向函数
  ptrPow = pow;

  /*
   * 打印函数 ptrPow
   * (pow) 返回值
   */
  cout << '\n' << ptrPow(0 , 0) << endl;

  // 定义函数指针
  double (*ptrCalc)(double , double);
  // 定义变量
  double number , num_ber;
  char op;

  // 叫用户输入运算式
  cout << "Enter:" << endl;
  // 将用户输入的数据赋给变量
  cin >> number;
  op = cin.get();
  cin >> num_ber;

  // 判断用户的选择
  switch (op) {

  // 如果选择的是加法
  case '+':
    // 调用加法函数
    ptrCalc = addition;

    // 退出选择
    break;

  // 如果选择的是减法
  case '-':
    // 调用减法函数
    ptrCalc = subtraction;

    // 退出选择
    break;

  // 如果选择的是乘法
  case '*':
    // 调用乘法函数
    ptrCalc = multiplication;

    // 退出选择
    break;

  // 如果选择的是除法
  case '/':
    // 判断除数是不是错误的
    if (0 == num_ber) {

      // 打印输入错误
      cout << "Input error" << endl;

      // 结束程序执行
      return 0;

    }

    // 调用除法函数
    ptrCalc = division;

    // 退出选择
    break;

  // 默认选择
  default:
    // 打印输入错误
    cout << "Input error" << endl;

    // 退出选择
    break;

  }

  /*
   * 调用函数 printResult
   * 打印结果
   */
  printResult(ptrCalc , number , num_ber);

  return 0;
}

// 定义函数 (实现函数)
void print(const int * pointer_num) {

  /*
   * 报错:
   * 无法改变其值
   * 因为传址时
   * 此地址加了
   * const 修饰符
   */
  // pointer_num = 525;

  // 打印
  cout << "number: " << *pointer_num << '\n' << endl;

}

// 定义函数 (实现函数)
int add(const int (*num)[3] , int leng) {

  // 定义变量
  int sum = 0;

  // 循环让数组元素相加
  for (int i = 0; i < leng; i++) {

    // 嵌套循环
    for (int j = 0; j < 3; j++) {

      // 累加
      sum += num[i][j];

    }

  }

  // 将结果返回 main 主函数
  return sum;

}

// 定义函数 (实现函数)
int pow(int number , int num) {

  // 定义变量
  int result = 1;

  // 开始循环计算次方
  for (int i = 0; i < num; i++) {

    // 计算
    result *= number;

  }

  // 将结果返回 main 主函数
  return result;

}

// 定义函数 (实现函数)
void printResult(double (*ptrCalc)(double , double) , double number , double num) {

  // 调用函数
  double result = ptrCalc(number , num);
  // 打印结果
  cout << "result: " << result << endl;

}

// 定义函数 (实现函数)
double addition(double number , double num) {

  // 将结果返回 main 主函数
  return number + num;

}

// 定义函数 (实现函数)
double subtraction(double number , double num) {

  // 将结果返回 main 主函数
  return number - num;

}

// 定义函数 (实现函数)
double multiplication(double number , double num) {

  // 将结果返回 main 主函数
  return number * num;

}

// 定义函数 (实现函数)
double division(double number , double num) {

  // 将结果返回 main 主函数
  return number / num;

}
