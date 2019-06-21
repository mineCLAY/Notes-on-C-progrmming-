/*
 * 5.06 IPP_scanf.c
 *
 * 键盘输入:
 * 贷款的金额、贷款年数、每月还款金额
 * 计算贷款要多还的利息
 */

#include <stdio.h>

int main(void) {

  printf("输入贷款金额:\n");
  int loan;
  scanf("%d" , &loan);

  printf("输入每月还款金额:\n");
  int payment;
  scanf("%d" , &payment);

  printf("输入还款年数:\n");
  int year;
  scanf("%d" , &year);

  int rate = payment * 12 * year - loan; // 计算利息
  printf("贷款需要多还: %d 元\n" , rate);     // 输出结果: 多还的钱

  return 0;
}
