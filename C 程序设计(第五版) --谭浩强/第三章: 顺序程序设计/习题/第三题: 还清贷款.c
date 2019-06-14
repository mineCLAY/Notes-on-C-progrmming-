/*
 * 购房从银行贷了一笔款 funds
 * 准备每月还款额为 income
 * 月利率为 rate
 * 计算多少月能还清
 */

#include <stdio.h>
#include <math.h>                                                    // 要引用数学函数 log 需要调用头文件 math.h

int main(void) {

  double funds = 300000 , income = 6000 , rate = 0.01 , month;
  month = (log(funds) - log(funds - income * rate)) / log(1 + rate); // 计算要几个月还清

  printf("%.2lf month can pay off\n" , month);                       // 输出结果

  return 0;
}

// 好像做错了 帮我纠正 可以私聊我
