/*
 * Example_fgets.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

// 宏定义 LEN 为 31 提高移植性
#define LEN 31

int main(void) {

  // 定义文件指针
  FILE *fp;
  fp = fopen("GOD.c" , "rt");

  // 定义存放结果的字符数组
  char buffer[LEN];

  // 判断是否出错
  if (NULL == fp) {
    // 输出出错信息
    fprintf(stderr , "fopen error: %s\n" ,
            strerror(errno));
    // 退出程序
    exit(EXIT_FAILURE);
  }

  // 读取文件的数据
  fgets(buffer , LEN , fp);

  // 输出结果
  puts(buffer);

  // 关闭文件流
  fclose(fp);

  return 0;
}
