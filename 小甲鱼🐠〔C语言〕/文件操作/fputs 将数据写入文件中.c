/*
 * Example_fputs.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

// 宏定义 LEN 为 31 提高移植性
#define LEN 31

int main(void0) {

  // 定义所需文件指针
  FILE *fp;
  fp = fopen("GOD.c" , "at+");

  // 定义所需变量
  char ch , buffer[LEN];

  // 判断是否出错
  if (NULL == fp) {
    // 输出错误信息
    fprintf(stderr , "fopen error: %s\n" ,
            strerror(errno));
    // 退出程序
    exit(EXIT_FAILURE);
  }

  // 叫用户输入一个字符串
  puts("Enter a string:");
  // 将用户输入的字符串赋给数组
  fgets(buffer , LEN , stdin);

  // 将 buffer 的数据写入文件
  fputs(buffer , fp);

  // 将文件的位置指针移到开头
  rewind(fp);

  // 从文件中读取一个字符
  ch = fgetc(fp);

  // 循环的输出读取的数据
  while (EOF != fp) {
    // 输出当前读取的一个字符
    putchar(ch);
    // 从文件读取一个字符
    ch = fgetc(fp);
  }

  return 0;
}
