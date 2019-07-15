/*
 * 求
 * S[n] = a + …… + aa……a (n 个 a)
 * 之值
 * 其中  是一个数字
 * n 代表 a 的位数
 * n 由键盘输入
 * 例如:
 * 2 + 22 + 222 + 2222 (此时 n = 4)
 */

#include <stdio.h>

// 定义函数 result
int result(int a , int n) {

  // 定义存储结果的变量
  int rt = a;
  int lt = a;

  // 循环计算
  for (int i = 1; i < n; i++) {
    rt *= 10;
    rt += a;
    lt += rt;
  }

  // 将结果返回 main 主函数
  return lt;
}

int main(void) {

  // 定义所需变量
  int a , n , rt;

  // 叫用户输入 a 的值
  puts("Enter a number:");
  // 将用户输入的值赋给变量 a
  scanf("%d" , &a);
  // 叫用户输入 n 的值
  puts("Enter n number:");
  // 将用户输入的值赋给变量 n
  scanf("%d" , &n);

  // 将函数 result 返回值赋给 result
  rt = result(a , n);
  // 输出结果
  printf("result: %d" , rt);

  return 0;
}
