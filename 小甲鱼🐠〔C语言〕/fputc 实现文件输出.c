/*
 * Example_fpuc.c
 *
 * fputc() 函数调用:
 * fputc(character , fp);
 *
 * 函数功能
 * 将字符 (character 的值 (ASCLL 码))
 * 输出到 fp 所指向的文件中去
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
  fp = fopen(filename , "w+");

  // 判断是否出错
  if (NULL == fp) {
    // 输出错误信息
    fprintf(stderr , "fopen error: %s\n" ,
            strerror(errno));
    // 退出程序
    exit(EXIT_FAILURE);
  }

  // 叫用户输入要写入文件的数据
  puts("Enter the sentences you want to write:");
  ch = getchar();
  ch = getchar();

  // 写入数据
  while (feof != ch) {
    // 写入数据
    fputc(ch , fp);
    ch = getchar();
  }

  // 关闭流 fp 防止内存泄露
  fclose(fp);

  return 0;
}
