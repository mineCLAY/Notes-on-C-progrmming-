/*
 * C 语言测试头文件能否使用
 */

#include <stdio.h>
// 自己定义的数学头文件
#include "math.h"

// 程序入口
void other() {

  // 测试能否调用数学头文件的函数
  printf("other - %d\n" , sum(10 , 20));

}
