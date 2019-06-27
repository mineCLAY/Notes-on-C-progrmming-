/*
 * 重构: 将整型和字符型混合使用
 *
 * 11.05 Mixed_Types_Original.c
 */

#include <stdio.h>

int main(void) {

  // 定义存放的数组
  char buf[256];

  // 用户的 名字
  puts("Enter you name:");
  fgets(buf , sizeof(buf) , stdin);
  char name[32];
  // scanf("%s" , name);
  // 将 name 存入 buf 中
  sscanf(buf , "%s" , name);

  // 用户的 年龄
  puts("Enter you age:");
  fgets(buf , sizeof(buf) , stdin);
  int age;
  // scanf("%d" , &age);
  // 将 age 存入 buf 中
  sscanf(buf , "%d" , &age);

  // 用户的 身高
  puts("Enter you height(unit cm):");
  fgets(buf , sizeof(buf) , stdin);
  double height;
  // scanf("%lf" , &height);
  // 将 height 存入 buf 中
  sscanf(buf , "%lf" , &height);

  // 用户的 性别
  puts("Enter you sex:");
  fgets(buf , sizeof(buf) , stdin);
  char sex;
  // scanf("%c" , &sex);
  // 将 sex 存入 buf 中
  sscanf(buf , "%c" , &sex);

  // 用户的 体重
  puts("Enter you weight(unit kg):");
  double weight;
  scanf("%lf" , &weight);

  // 输出用户的 信息
  printf("%s , %d 岁 , 性别: %c , 身高: %lf , 体重: %lf" ,
        name , age , sex , height , weight);;

  return 0;
}
