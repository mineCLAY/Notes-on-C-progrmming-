/*
 * 编程
 * 记录一个文件中字符的个数
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(void) {

  // 定义记录字符个数的变量
  int character = 0;
  int many;
  int *stogate = &many;

  // Linux & Mac 命令行指令
  system("echo \"I'm GOD. yo , I like HU , I am HC.\" > fgetc.out");

  // 定义流 fp
  FILE *fp;
  fp = fopen("fgetc.out" , "r");

  // 判断语句有没有问题
  if (NULL == fp) {
    perror("fopen"); // 输出错误信息
    return -1; // 退出程序
  }

  do {
    character = fgetc(fp);
    if (feof(fp)) {
      break;
    }
  } while (1);

  // 计算字符个数
  printf("%s %n %d\n" ,
          character , stogate , many);
  // 输出结果: 计算出的字符个数
  printf("文件字符个数: %d\n" , many);

  // 关闭流 fp 防止内存泄露
  fclose(fp);

  return 0;
}

// 我现在不会 以后做
