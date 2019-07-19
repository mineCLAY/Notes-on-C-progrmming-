/*
 * Example_fgetc.c
 *
 * 在 fgetc 函数调用中
 * 读取的文件必须是以读或读写
 * 方式打开的
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void) {

  // 定义所需变量
  char ch , filename[20];
  // 叫用户输入文件名
  puts("Enter the filename you want to write:");
  // 将用户输入的文件名赋给 filename
  scanf("%s" , filename);

  // 定义文件指针
  FILE *fp;
  fp = fopen(filename , "r");

  // 判断是否出错
  if (NULL == fp) {
    // 输出错误信息
    fprintf(stderr , "fopen error: %s\n" ,
            strerror(errno));
    // 退出程序
    exit(EXIT_FAILURE);
  }

  // 读出数据
  while (!feof(fp)) {
    // 读出数据
    ch = fgetc(fp);
    // 判断读出是否出错
    if (NULL == fgetc) {
      // 输出出错信息
      fprintf(stderr , "fopen error: %s\n" ,
              strerror(errno));
      // 退出程序
      exit(EXIT_FAILURE);
    }
 
    // 输出结果
    putchar(ch);
  }

  // 关闭流 fp 防止内存泄露
  fclose(fp);

  return 0;
}
