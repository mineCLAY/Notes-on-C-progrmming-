/*
 * 设一个函数 prcess
 * 在调用它的时候
 * 每次实现不同的功能
 * (有点类似多态)
 * 输入 a 和 b 两个数
 * 第一次调用 process 时找出
 * a 和 b 中大者
 * 第二次找出其中小者
 * 第三次求 a 与 b 之和
 */

// 加强方法

#include <stdio.h>
#include <stdlib.h>

// 定义函数 process
process(int a , int b , int (*fun)()) {

  // 定义所需变量
  static int i = 1;

  // 判断 i 是否为 1
  if (i == 1) {
    // 先判断 a 和 b 是否一致
    if (a == b) {
      // 告诉用户输入的值一致
      puts("The two numbers you entered are the same");
      // 退出程序
      exit(EXIT_FAILURE);
    }

    /*
     * 调用函数 max() 返回值
     * 实现了第一步:
     * 求大数
     */
    int c = fun(a , b);
    // 输出大值
    printf("%d\n" , c);
  }

  // 判断 i 是否为 2
  if (i == 2) {
    // 先判断 a 和 b 是否一致
    if (a == b) {
      // 告诉用户输入的值一致
      puts("The two numbers you entered are the same");
      // 退出程序
      exit(EXIT_FAILURE);
    }

    /*
     * 调用函数 min() 返回值
     * 实现了第一步:
     * 求小数
     */
    int c = fun(a , b);
    // 输出大值
    printf("%d\n" , c);
    /*
     * 让 i 自加
     * 以便下次调用实现其他功能
     */
    i++;
  }

  // 判断 i 是否为 3
  if (i == 3) {
    /*
     * 调用函数 add() 返回值
     * 实现了第一步:
     * 求和
     */
    int c = fun(a , b);
    // 输出大值
    printf("%d\n" , c);
  }

}

int main(void) {

  // 定义所需变量
  int a , b;
  // 叫用户输入 2 个数
  puts("Enter 2 number:");
  // 将用户输入的值赋给变量
  scanf("%d %d" , &a , &b);
  // 声明实现三个功能的函数
  int max(int a , int b);
  int min(int a , int b);
  int add(int a , int b);

  /*
   * 调用函数 process
   * 实现输出大者的功能
   */
  printf("max: ");
  process(a , b , max);

  /*
   * 调用函数 process
   * 实现输出小者的功能
   */
  printf("min: ");
  process(a , b , min);

  /*
   * 调用函数 process
   * 实现输出求和的功能
   */
  printf("add result: ");
  process(a , b , add);


  return 0;
}

// 定义函数 max()
int max(int a , int b) {

  /*
   * 比较哪个数大
   * 就返回哪个值返回 process() 函数
   */
  if (a > b)
    // 返回 a 的值
    return a;
  else if (b > a)
    // 返回 b 的值
    return b;

}

// 定义函数 min()
int min(int a , int b) {

  /*
   * 比较哪个数小
   * 就返回那哪个值返回 process() 函数
   */
  if (a < b)
    // 返回 a 的值
    return a;
  else if (b < a)
    // 返回 a 的值
    return b;

}

// 定义函数 add()
int add(int a , int b) {

  // 定义所需变量
  int result;
  // 将 a , b相加的结果赋给 result
  result = a + b;

  // 将 result 返回函数 process()
  return result;

}

#if 0

// 普通方法

#include <stdio.h>

// 定义函数 process
process(int a , int b , int (*fun)()) {

    /*
     * 调用函数 max() 返回值
     * 实现了三个功能
     */
    int c = fun(a , b);
    // 输出
    printf("%d\n" , c);
}

int main(void) {

  // 定义所需变量
  int a , b;
  // 叫用户输入 2 个数
  puts("Enter 2 number:");
  // 将用户输入的值赋给变量
  scanf("%d %d" , &a , &b);
  // 声明实现三个功能的函数
  int max(int a , int b);
  int min(int a , int b);
  int add(int a , int b);

  /*
   * 调用函数 process
   * 实现输出大者的功能
   */
  printf("max: ");
  process(a , b , max);

  /*
   * 调用函数 process
   * 实现输出小者的功能
   */
  printf("min: ");
  process(a , b , min);

  /*
   * 调用函数 process
   * 实现输出求和的功能
   */
  printf("add result: ");
  process(a , b , add);


  return 0;
}

// 定义函数 max()
int max(int a , int b) {

  /*
   * 比较哪个数大
   * 就返回哪个值返回 process() 函数
   */
  if (a > b)
    // 返回 a 的值
    return a;
  else if (b > a)
    // 返回 b 的值
    return b;

}

// 定义函数 min()
int min(int a , int b) {

  /*
   * 比较哪个数小
   * 就返回那哪个值返回 process() 函数
   */
  if (a < b)
    // 返回 a 的值
    return a;
  else if (b < a)
    // 返回 a 的值
    return b;

}

// 定义函数 add()
int add(int a , int b) {

  // 定义所需变量
  int result;
  // 将 a , b相加的结果赋给 result
  result = a + b;

  // 将 result 返回函数 process()
  return result;

}

#endif
