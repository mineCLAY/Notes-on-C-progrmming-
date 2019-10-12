
/*
 * 导入自己
 * 创建的头文件
 * header
 */
#include "..\\Header\\header.h"

// 定义存储阶乘次数的变量
unsigned short thatNum = 8;
/*
 * 定义存储测试作用域
 * 是否会互相干扰的变量
 */
bool condition = true;

/*
 * 定义函数 ReturnFactorial
 * 实现阶乘计算
 */
unsigned long ReturnFactorial(const unsigned short num) {

  // 定义存储阶乘结果的变量
  unsigned long sum = 1;

  // 开始循环
  for (int i = 1; i <= num; i++) {

    // 开始进行阶乘计算
    sum *= i;

  }

  // 判断 condition 是否为真
  if (/* true == */ condition) {

    // 返回阶乘结果
    return sum;

  }
  // false == condition
  else {

    // 返回 0
    return 0;

  }

}
