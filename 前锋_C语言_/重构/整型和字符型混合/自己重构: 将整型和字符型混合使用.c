/*
 * 重构: 将整型和字符型混合使用
 *
 * 11.05 Mixed_Types_Original.c
 */

#include <stdio.h>

int main(void) {

  // 用户的 名字
  puts("Enter you name:");
  char name[32];
  scanf("%s" , name);

  // 用户的 年龄
  puts("Enter you age:");
  int age;
  scanf("%d" , &age);

  // 用户的 身高
  puts("Enter you height(unit cm):");
  double height;
  scanf("%lf" , &height);

  // 用户的 性别
  puts("Enter you sex:");
  char sex;
  /*
   * 在 %c 前
   * 加一个 %*c
   * 使上文结束时输入的换行
   * 无效存入 sex
   */
  scanf("%*c%c" , &sex , &sex);

  // 用户的 体重
  puts("Enter you weight(unit kg):");
  double weight;
  scanf("%lf" , &weight);

  // 输出用户的 信息
  printf("%s , %d 岁 , 性别: %c , 身高: %lf , 体重: %lf" ,
        name , age , sex , height , weight);;

  return 0;
}
