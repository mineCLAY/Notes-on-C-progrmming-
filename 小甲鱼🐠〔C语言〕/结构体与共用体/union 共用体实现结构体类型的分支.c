/*
 * 设有若干个人员的数据
 * 其中有学生和教师
 * 学生的数据中包括:
 * 号码、姓名、性别、职业、班级
 * 教师的数据包括:
 * 号码、姓名、性别、职业、职务
 * 可以看出
 * 学生和教师所包含的数据是不同的
 * 编程实现
 */

#include <stdio.h>
#include <stdlib.h>

// 定义结构体
struct {

  int num;
  char name[20];
  char sex;
  char job;

  // 定义共用体
  union {

    int Class;
    char position[10];

  }
  // 定义共用体变量
  category;

}
// 定义结构体变量
person[2];

int main(void) {

  // 开始循环
  for (int i = 0; i < 2; i++) {
    // 叫用户输入号码
    puts("\nEnter the number:");
    // 将用户输入的号码赋值
    scanf("%d" , &person[i].num);

    // 叫用户输入姓名
    puts("Enter the name:");
    // 将用户输入的姓名赋值
    scanf("%s" , &person[i].name);
    // 存储换行符
    getchar();

    // 叫用户输入性别
    puts("Enter the sex(M / F):");
    // 将用户输入的性别赋值
    scanf("%c" , &person[i].sex);
    // 存储换行符
    getchar();

    // 叫用户输入职业
    puts("Enter the job(s / t)");
    // 将用户输入的职业赋值
    scanf("%c" , &person[i].job);

    // 判断是学生还是教师
    if ('s' == person[i].job) {
      // 叫用户输入班级
      puts("Enter the class:");
      // 将用户输入的班级赋值
      scanf("%d" ,
             &person[i].category.Class);
    } else if ('t' == person[i].job) {
      // 叫用户输入职务
      puts("Enter the position:");
      // 将用户输入的职务赋值
      scanf("%s" ,
             &person[i].category.position);
    } else {
      // 输出错误
      puts("Input error");
      // 程序结束
      exit(EXIT_FAILURE);
    }
  }

  // 设置排版
  puts("\nNO.\tname\tsex\tjob\tclass / position");

  // 循环输出
  for (int a = 0; a < 2; a++) {
    // 输出号码
    printf("\n%d\t" , person[a].num);
    // 输出姓名
    printf("%s\t" , person[a].name);
    // 输出性别
    putchar(person[a].sex);
    putchar('\t');
    // 输出职业
    putchar(person[a].job);
    printf("\t     ");

    // 输出 班级 / 职务
    if ('s' == person[a].job)
      // 输出学生班级
      fprintf(stdout , "%d\n" , person[a].category.Class);
    else if ('t' == person[a].job)
      // 输出教师职务
      puts(person[a].category.position);
  }

  return 0;
}
