/*
 * 循环输入 6 个月的工资
 * 计算半年的平均成绩工资
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义变量
  double salary;
  double sumSalary = 0;
  double avgSalary;
  const double MONTH = 6;

  // 循环计算
  for (int i = 0; i < MONTH; i++) {

    // 叫用户输入一个月的工资
    cout << "Enter a month salary:" << endl;
    // 将用户输入的工资赋给变量
    cin >> salary;

    // 累加
    sumSalary += salary;

  }

  // 计算平均工资
  avgSalary = sumSalary / MONTH;

  // 打印
  cout << "avgSalary: " << avgSalary << endl;

  return 0;
}
