/*
 * Problem NO.ONE
 *
 * 编程实现键盘输入:
 * 你喜欢的人的
 * 名字、性别、年龄、生日、身高、体重、爱好等等
 * 并整齐、漂亮的格式保存到文件冰打印到屏幕上
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void) {

  // 定义所需变量
  char name[64];
  char sex[6] , hobby[64];
  char age[8] , birthday[16];
  char height[32] , weight[32];

  // 名字
  puts("Enter you name:");
  scanf("%[^\n]" , name);

  // 性别
  puts("Enter you sex(M or F):");
  scanf("%*c%[^\n]" , sex , sex);

  // 年龄
  puts("Enter you age:");
  scanf("%*c%[^\n]" , age , age);

  // 生日
  puts("Enter you birthday(hour and day):");
  scanf("%*c%[^\n]" , birthday);

  // 身高
  puts("Enter you height(unit cm):");
  scanf("%*c%[^\n]" , height , height);

  // 体重
  puts("Enter you weight(unit kg):");
  scanf("%*c%[^\n]" , weight , weight);

  // 爱好
  puts("Enter you hobby:");
  scanf("%*c%[^\n]" , &hobby);

  // 定义文件流  fp
  FILE *fp;
  fp = fopen("Like.c" , "w+");

  // 判断是否出错
  if (NULL == fp) {
    /*
     * 如果出错
     * 则打印出错信息
     */
    fprintf(stderr , "fopen error: %s\n" ,
            strerror(errno));
    // 退出程序
    exit(EXIT_FAILURE);
  }

  // 将获取的数据存入文件
  fputs(name , fp);
  fputs("\n" , fp);
  fputs(sex , fp);
  fputs("\n" , fp);
  fputs(age , fp);
  fputs("\n" , fp);
  fputs(birthday , fp);
  fputs("\n" , fp);
  fputs(height , fp);
  fputs("\n" , fp);
  fputs(weight , fp);
  fputs("\n" , fp);
  fputs(hobby , fp);
  fputs("\n" , fp);

  // 打印到屏幕上
  printf("name: %s\n" , name);
  printf("sex: %s\n" , sex);
  printf("age: %s\n" , age);
  printf("birthday: %s\n" , birthday);
  printf("height: %s cm\n" , height);
  printf("weight: %s kg\n" , weight);
  printf("hobby: %s\n" , hobby);

  return 0;
}
