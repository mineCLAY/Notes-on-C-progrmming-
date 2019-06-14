#include <stdio.h>

int main(void) {

  int years = 5; //　定义存期
  double rate1 = 0.015 , rate2 = 0.021 , rate3 = 0.0275 , rate4 = 0.03 , rate5 = 0.0035;

  // 第一种存法
  int principal1 = 1000;
  double total_money1;
  total_money1 = principal1 * (1 + rate4 * years);
  printf("1 total_money = %4.0lf 元\n" , total_money1);
  
  // 第二种存法
  int principal2 = 1000;
  double total_money2_1 , total_money2;
  total_money2_1 = principal2 * (1 + rate2 * 2);
  total_money2 = total_money2_1 * (1 + rate3 * 3);
  printf("2 total_money = %4.2lf 元\n" , total_money2);
  
  // 第三种存法
  int principal3 = 1000;
  double total_money3_1 , total_money3;
  total_money3_1 = principal3 * (1 + rate3 * 3);
  total_money3 = total_money3_1 * (1 + rate2 * 2); 
  printf("3 total_money = %4.2lf 元\n" , total_money3);
  
  // 第四种存法
  double total_money4 = 1000;
  total_money4 *= (1 + rate1);
  total_money4 *= (1 + rate1);
  total_money4 *= (1 + rate1);
  total_money4 *= (1 + rate1);
  total_money4 *= (1 + rate1);
  printf("4 total_money = %4.0lf 元\n" , total_money4);


  // 第五种存法
  double total_money5 = 1000;
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  total_money5 *= (1 + rate5 / 4.0);
  printf("5 total_money = %lf 元\n" , total_money5);

  return 0;
}


// 花了我一个多小时 我咋连这都要做那么久呢 ?
