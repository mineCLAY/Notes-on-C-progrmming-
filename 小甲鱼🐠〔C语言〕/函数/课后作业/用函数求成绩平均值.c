/*
 * 有一个一维数组 score
 * 内放 10 个学生成绩
 * 求平均成绩
 * (写一个 average 函数
 * 求平均成绩)
 */

#include <stdio.h.

int main(void) {

  // 声明有参函数 average()
  int average(double b[10]);
  //  定义存放成绩的数组
  double score[10] = {
    150.2 , 66 , 98.6 , 88.5 , 90 , 23.3 , 77 , 86 , 99 , 55
  };

  /*
   * 调用有参函数
   * 输出平均成绩
   */
  average(score);

  return 0;
}

// 定义有参函数 average
int average(double b[10]) {

  // 定义存储平均成绩的变量 a
  double average = 0;

  for (int i = 0; i < 10; i++) {
    average += b[i];
  }

  // 计算出平均成绩
  average /= 10;
  // 输出平均成绩
  printf("average score: %.2lf\n" , average);
}
