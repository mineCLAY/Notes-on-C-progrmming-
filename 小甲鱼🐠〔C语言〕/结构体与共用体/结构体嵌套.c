/*
 * 结构体的嵌套定义
 */

#include <stdio.h>

int main(void) {

  // 定义结构体类型
  struct {
    int num;
    char name[20];
    char sex;
    // 嵌套结构体类型
    struct date birthday;
    float score;
  }
  // 定义一个结构体变量
  boy;

  // 定义结构体类型 data
  struct date {
    int year;
    int month;
    int day;
  };

  // 叫用户输入生日
  puts("Enter you birthday(year/month/day):");
  // 将用户输入的生日赋给各变量
  scanf("%d %d %d" , &boy.birthday.year , &boy.birthday.month , &boy.birthday.day);

  // 输出生日
  puts("\tYou birthday:");
  puts("\tyear\tmonth\tday");
  printf("\t%d\t%d\t%d" , boy.birthday.year , boy.birthday.month , boy.birthday.day);

  return 0;
}
