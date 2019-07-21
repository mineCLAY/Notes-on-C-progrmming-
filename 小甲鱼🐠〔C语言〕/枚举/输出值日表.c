/*
 * Example_enum_2.c
 *
 * 输出值日生值日表
 */

#include <stdio.h>

int main(void) {

  // 定义枚举类型 boy
  enum boy {
    Tom , Danny , Gan , LiLei
  }
  // 定义枚举变量
  month[31] , j;

  // 给 j 赋初值
  j = Tom;

  // 开始循环赋值
  for (int i = 1; i <= 30; j++ , i++) {
    // 将 month 数组存储名字
    month[i] = j;

    // 如果 j 自加到了结尾就重新赋值
    if (j > LiLei)
      j = Tom;
  }

  // 循环输出结果
  for (int i = 1; i <= 30; i++) {
    // 选择输出
    switch (month[i]) {
      case Tom: {
        printf("%4d %s" , i , month[i]);
        break;
      }
      case Danny: {
        printf("%4d %s" , i , month[i]);
        break;
      }
      case Gan: {
        printf("%4d %s" , i , month[i]);
        break;
      }
      case LiLei: {
        printf("%4d %s" , i , month[i]);
        break;
      }
      default:
        break;
    }
  }

  return 0;
}
