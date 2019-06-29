/*
 * problem NO.TWO
 *
 * 键盘输入出行人员的名字、
 * 身份证号(包括儿童)
 * 计算并打印出预订信息
 * 和总的价格并写入文件
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void){

  // 定义所需变量
  char name1[32];
  char number1[64];
  char name2[32];
  char number2[64];
  char name3[32];
  char number3[64];

  // 第一个出行人
  puts("Enter you name:");
  fgets(name1 , 32 , stdin);
  puts("Enter you identification number:");
  fgets(number1 , 64 , stdin);

  // 第二个出行人
  puts("Enter you name:");
  fgets(name2 , 32 , stdin);
  puts("Enter you identification number:");
  fgets(number2 , 64 , stdin);

  // 第三个出行人
  puts("Enter you name:");
  fgets(name3 , 32 , stdin);
  puts("Enter you identification number:");
  fgets(number3 , 64 , stdin);

  // 定义文件流 fp
  FILE *fp;
  fp = fopen("ID.c" , "w+");

  // 判断是否出错
  if (NULL == fp) {
    fprintf(stderr , "fopen error: %s\n" ,
            strerror(errno));
    // 退出程序
    exit(EXIT_FAILURE);
  }

  /*
   * 将输入的数据存入文件
   * 第一个出行人
   */
  fputs("第一个出行人:\n" , fp);
  fputs(name1 , fp);
  fputs(number1 , fp);
  fputs("\n\n" , fp);

  // 第二个出行人
  fputs("第二个出行人\n" , fp);
  fputs(name2 , fp);
  fputs(number2 , fp);
  fputs("\n\n" , fp);

  // 第三个出行人
  fputs("第三个出行人:\n" , fp);
  fputs(name3 , fp);
  fputs(number3 , fp);
  fputs("\n\n" , fp);

  // 输出第一个出行人
  puts("第一个出行人:");
  puts(name1);
  puts(number1);

  // 输出第二个出行人
  puts("第一个出行人:");
  puts(name2);
  puts(number2);

  // 输出第三个出行人
  puts("第一个出行人:");
  puts(name2);
  puts(number2);

  return 0;
}
