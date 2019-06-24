/*
 * 9.02 Example_fgets.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(void) {

  // Linux & Mac 命令行指令
  system("echo \"用户名: HC\" > fgets.out");
  system("echo \"密码: 无可告诉\" > fgets.out");

  // 定义文件流 fp
  FILE *fp;
  fp = fopen("fgets.out" , "r");

  // 判断文件流 fp 是否出错
  if (NULL == fp) {
    // 打印错误信息
    fprintf(stderr , "fopen error: %s\n" , strerror(errno));
    
    exit(EXIT_FAILURE);
  }

  // 设置存储变量
  char string[128];
  while (NULL != fgets(string , 128 , fp)) {
    printf("%s\n" , string);
  }

  // 关闭流 fp 防止内存泄露 
  fclose(fp);

  return 0;
}
