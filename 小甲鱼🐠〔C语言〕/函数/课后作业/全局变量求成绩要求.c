/*
 * 有一个一维数组
 * 内放 10 个学生成绩
 * 写一个函数
 * 求出平均分、最高分、最低分
 */

#include <stdio.h>

// 定义全局变量
float max , min;

// 定义函数 aver(0
double aver(float score[10]) {

  // 定义所需变量
  float aver = 0;

  // 循环计算平均值
  for (int i = 0; i < 10; i++) {
    aver += score[i];
  }
  aver /= 10;

  // 开始计算最高分、最低分
  max = min = score[0];
  // 循环求出最高分
  for (int i = 1; i < 10; i++) {
    // 判断数组的某一个变量是否大于前一个
    if (max < score[i]) {
      // 则将其值调换
      max = score[i];
    }

    // 判断数组的某一个变量是否小于前一个
    else if (min > score[i]) {
      // 则将其值调换
      min = score[i];
    }
  }

  // 将计算出的平均分返回 main 主函数
  return aver;
}

int main(void) {

  // 定义所需数组
  float score1[10];
  // 定义所需变量
  float ave;

  // 叫用户输入 10 个学生的成绩
  puts("Enter 10 number:");
  // 将用户输入的 10 个值赋给数组
  for (int i = 0; i < 10; i++) {
    scanf("%f" , score1[i]);
  }

  // 将函数 ave() 返回值赋给变量 ave
  ave = aver(score1);
  // 输出结果
  printf("max: %.2f\nmin: %.2f\nave: %.2f\n" ,
          max , min , ave);

  return 0;
}
