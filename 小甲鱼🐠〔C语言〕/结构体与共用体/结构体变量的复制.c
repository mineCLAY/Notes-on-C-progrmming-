/*
 * 实现结构体变量的复制
 */

#include <stdio.h>

int main(void) {

  // 定义结构体类型 student
  struct student {
    int num;
    char *name;
    char sex;
    float score;
  }
  // 定义两个结构体 student 变量
  boy1 , boy2;

  // 叫用户输入学号
  puts("Enter student number:");
  // 将用户输入的学号赋给 boy1.num
  scanf("%d" , &boy1.num);

  // 给 boy1.name 赋值
  boy1.name = "GOD";

  // 叫用户输入性别
  puts("Enter sex:");
  // 将用户输入的性别赋给 boy1.sex
  scanf("%*c%c" , &boy1.sex , &boy1.sex);

  // 叫用户输入成绩
  puts("Enter score:");
  // 将用户输入的成绩赋给 boy1.score
  scanf("%f" , &boy1.score);

  // 实现将 boy1 全体成员的复制
  boy2 = boy1;

  // 输出结果
  printf("student number: %d\n" , boy2.num);
  printf("name: ");
  puts(boy2.name);
  printf("sex: %c\n" , boy2.sex);
  printf("score: %f\n" , boy2.score);

  return 0;
}
