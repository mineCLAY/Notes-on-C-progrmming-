/*
 * 一个结构体变量中可以存放一组数据
 * (如一个学生的学号、姓名、成绩等数据)
 * 如果有 10 个学号僧的数据需要参加运算
 * 显然应该用数组
 * 这就是结构体数组
 * 结构体数组与以前介绍过的数值形数组
 * 不同之处在于每个数组元素都是一个
 * 结构体类型的数据
 * 它们都分别包括各个成员 (分量) 项
 * 编程实现 通讯录 功能
 */

#include <stdio.h>

// 宏定义一个标识符代表代换常量 3
#define NUM 3

int main(void) {

  // 定义结构体类型 person
  struct person {
    char name[20];
    char phone[30];
  }
  // 定义一个结构体变量数组
  max[NUM];

  // 循环赋值
  for (int i = 0; i < NUM; i++) {
    // 叫用户输入名字
    puts("Enter name:");
    // 将用户输入的名字赋给 max[i].name
    gets(&max[i].name);

    // 叫用户输入电话号码
    puts("Enter phone:");
    // 将用户输入的电话号码赋给 max[i].phone
    gets(&max[i].phone);
  }

  // 输出结果
  puts("\tname\tphone");
  // 循环输出结果
  for (int i = 0; i < NUM; i++) {
    putchar('\t');
    printf("%s" , max[i].name);
    putchar('\t');
    printf("%s\n" , max[i].phone);
  }

  return 0;
}
