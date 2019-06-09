/*
 * 4.10. IPP_sprintf[1].c
 *
 * 产生 10 个 (0 , 100) 之间的随机数
 * 并且将他们打印一个数组 str 中
 * 以 逗号 隔开 
 */

/*
 * 01. srand() 函数是随机数发生器的初始化函数.
 * 02. rand() 函数和 srand()，配合使用才能产生伪随机序列.
 * 03. srand() 还是在产生随机数前 , 需要系统提供的生产伪随机数序列的种子.
 *     rand() 根据这个种子的值产生一系列随机数
 * 04. 如果系统提供的种子没有变化 , 每次调用 rand 函数生产的伪随机数序列都是
 *     一样的 , 所以我们需要一个不断变化的种子 , 什么事在随时变化呢?
 *     时间 !
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand(time(0)); // 设置随机数的种子 , 以当前时间为参数
  char str[64];
  int offset = 0;  // 地址偏移

  // 产生 0 ~ 100 之间的随机数 , 自然 rand() % 100
  for (int i = 0; i < 10; ++i) {
 				// 记录 offset 可以实现累加字符串到尾部
    offset += sprintf(str + offset , "%d , " , rand() % 100);
  }
  // 记录 offset 的妙用 , 将最后一个逗号换成换行符
  str[offset - 1] = '\n';

  printf("str is： %s\n" , str);

  return 0;
}
