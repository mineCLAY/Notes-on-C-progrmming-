/*
 * 怕nd别一个整数数组
 * a[10] = {1 , 2 , 3 , 4 , -1 , -2 , -3 , -4 , 2 , 3}
 * 中各元素的值
 * 若大于 0 则输出该值
 * 若小于 0 则输出 0 值
 */

#include <stdio.h>

int main(void) {

  // 定义数组
  int a[10] = {1 , 2 , 3 , 4 , -1 , -2 , -3 , -4 , 2 , 3};
  // 声明判断有参函数 judge
  int judge(int b[10]);
  // 定义所需变量
  int result = 0;

  // 循环判断数组
  for (int i = 0; i < 10; i++) {
    printf("a[%d] " , i);
    // 调用函数 judge
    judge(a[i]);
  }

  return 0;
}

// 定义函数 judge()
int judge(int b) {

    // 判断
    if (0 < b) {
      printf("The result is %d\n" , b);
    } else if (0 >= b) {
      printf("The result is %d\n" , 0);;
    }

}
