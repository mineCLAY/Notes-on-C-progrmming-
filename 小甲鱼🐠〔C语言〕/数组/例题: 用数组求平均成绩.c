/*
 * 一个学习小组有 5 个人
 * 每个人有三门课的考试成绩
 * 将各个数据保存到二维数组 a[5][3] 中
 * 并求出全组分科的平均成绩和总平均成绩
 */

#include <stdio.h>

int main(void) {

  // 定义所需数组
  int fraction[5][3] = { {80 , 75 , 92} , {61 , 65 , 71} , {59 , 63 , 70} , {85 , 87 , 90} , {76 , 77 , 85} };

  // 定义所需变量
  int average1 , average2 , average3;
  int total , sum;

  // 输出每个人的名字
  printf("\t张\t王\t李\t赵\t周\n");

  /*
   * 开始循环输出
   * 先输出行
   */
  for (int i = 0; i < 3; i++) {
    /*
     * 判断行的条件看
     * 是哪个课程成绩
     */
    if (i == 0) printf("Math\t");
    else if (i == 1) printf("C\t");
    else if (i == 2) printf("Foxpro\t");

    // 循环输出列
    for (int j = 0; j < 5; j++) {
      printf("%d\t" , fraction[j][i]);

      // 求出全组分科平均成绩
      sum += fraction[j][i];
    } putchar('\n'); /*
                      * 输出换行符
                      * 使格式完美
                      */
    if (i == 0) average1 = sum / 5;
    if (i == 1) average2 = sum / 5;
    if (i == 2) average3 = sum / 5;
    sum = 0;
  }
  total = (average1 + average2 + average3) / 3;

  // 输出全科平均成绩
  puts("\nMath average score:");
  printf("%d\n" , average1);
  puts("C average score:");
  printf("%d\n" , average2);
  puts("Foxpro average score:");
  printf("%d\n" , average3);
  puts("total average:");
  printf("%d\n" , total);

  return 0;
}
