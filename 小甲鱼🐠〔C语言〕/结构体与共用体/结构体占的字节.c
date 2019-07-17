/*
 * 定义结构体变量后
 * 系统会为之分配内存单元
 * 内存中各占几个字节?
 */

#include <stdio.h>

int main(void) {

  // 定义所需结构体
  struct student {
    int num;
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
  } student1 , student2;

  // 输出占几个字节
  printf("%d\t%d" ,
         sizeof (student1) , sizeof (student2));

  return 0;
}
