/*
 * 哟一个结构体变量 stu
 * 内含学生学号、姓名 3 门课程
 * 的成绩
 * 通过调用函数 print 中将它们输出
 *
 * 用两种方法:
 * 结构体变量作函数参数
 * 改用指向结构体变量的指针作实参
 */

#include <stdio.h>
#include <string.h>

// 指向结构体变量的指针作实参

// 定义就诶够提类型 student
struct student {

  int num;
  char *name;
  float score[3];

}
// 定义结构体变量
stu;

int main(void) {

  // 声明函数 print
  int print(struct student *);
  // 定义结构体类型 student 变量
  struct student stu;

  // 给结构体变量赋初值
  stu.num = 9;
  stu.name = "HJW";
  stu.score[0] = 99.5;
  stu.score[1] = 99.5;
  stu.score[2] = 95.5;

  // 调用函数 print 打印
  print(&stu);

  return 0;
}

// 定义函数 print
int print(struct  student *pointer) {

  // 打印结果
  printf("\tnum: %d\n" , pointer -> num);
  printf("\tname: ");
  puts(pointer -> name);

  // 循环打印成绩
  for (int i = 0; i < 3; i++) {
    printf("\tscore: %.1f\n" , pointer -> score[i]);
  }

}

#if 0

// 结构体变量作函数参数

// 定义结构体类型 student
struct student {

  int num;
  char *name;
  float score[3];

}
// 定义结构体变量 stu
stu;

int main(void) {

  // 声明函数 print
  int print(struct student);
  // 定义结构体类型 student 变量
  struct student stu;

  // 给结构体变量赋初值
  stu.num = 9;
  stu.name = "HJW";
  stu.score[0] = 99.5;
  stu.score[1] = 100;
  stu.score[2] = 95;

  // 调用函数 print 打印
  print(stu);

  return 0;
}

// 定义函数 print
int print(struct  student stu) {

  // 打印结果
  printf("\tnum: %d\n" , stu.num);
  printf("\tname: ");
  puts(stu.name);

  // 循环打印成绩
  for (int i = 0; i < 3; i++) {
    printf("\tscore: %.1f\n" , stu.score[i]);
  }

}

#endif
