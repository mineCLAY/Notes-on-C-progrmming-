/*
 * 输出所有的 "水仙花数"
 * 所谓 "濉溪县话数"
 * 是指一个 3 位数
 * 其数字立方和等于该数本身
 * 例如:
 * 153 =
 * 1 ** 3 + 5 ** 3 + 3 ** 3
 */

#include <stdio.h>

int main(void) {

  // 定义储存三位数的变量
  int result = 100;

  // 循环进行判断
  for (int a = 1; a <= 9; a++) {
    for (int b = 0; b <= 9; b++) {
      for (int c = 0; c <= 9; result++ , c++) {
        if (result == a * a * a + b * b * b + c * c * c) {
          printf("The %d is daffodil number.\n\n" , result);
        } else {
          continue;
        }
      }
    }
  }

  return 0;
}
