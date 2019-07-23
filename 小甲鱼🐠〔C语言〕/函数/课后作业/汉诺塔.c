/*
 * 有一个老和尚想把这 64 个盘子
 * 从 A 座移到 C 座
 * 但每次只允许移动一个盘
 * 且在移动过程中在 3 个座上
 * 都始终保持大盘在下
 * 小盘在上
 * 在移动过程中科院利用 B 座
 * 要求编程序打印出移动的步骤
 */

#include <stdio.h>

// 定义函数 Enter
int Enter() {

  // 定义所需变量
  int quantity;

  // 叫用户输入盘子的数
  puts("Enter quantity:");
  // 将用户输入的盘子数赋给 quantity
  scanf("%d" , &quantity);

  // 将结果 quantity 返回 main 主函数
  return quantity;
}

int main(void) {

  // 定义所需变量
  int quantity;

  /*
   * 将函数 Enter 的返回值
   * 赋给变量 quantity
   */
  quantity = Enter();

  // 声明函数 Hanio()
  void Hanio(int quantity , char a , char b , char c);

    /*
     * 调用函数 Hani()
     * 输出运盘子的步骤
     */
    Hanio(quantity , 'A' , 'B' , 'C');

  return 0;
}

// 定义函数 Hanio
void Hanio(int quantity , char a , char b , char c) {

  // 声明函数 Print
  int Print(char x , char y);

  // 判断是否输入错误
  if (0 >= quantity) {
    // 告诉用户输入错误
    puts("Input error");
  }
  // 进行判断决定运盘子的步骤
  else if (1 == quantity) {
    // 输出结果
    Print(a , c);
  } else if (1 < quantity){
    // 递归
    Hanio(quantity - 1 , a , c , b);

    // 调用函数 Print 输出结果
    Print(a , c);

    // 递归
    Hanio(quantity - 1 , b , a , c);
  }

}

// 定义函数 Print
int Print(char x , char y) {

  // 输出结果
  putchar(x);
  printf(" -> ");
  putchar(y);
  putchar('\n');

}
