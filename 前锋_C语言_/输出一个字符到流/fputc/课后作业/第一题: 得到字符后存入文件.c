/*
 * 用 fgetc 从标准中得到字符
 * 用 fputc 把内容存到文件中
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(void) {

  // 定义文件流 HHH
  FILE *HHH;
  HHH = fopen("fprintf.out" , "w+");
  // 判断是否错误
  if (NULL == HHH) {
    fprintf(stderr , "fopen error: %s\n" ,
                      strerror(errno));
    // 退出程序
    exit(EXIT_FAILURE);
  }
  // 将内容用 fprintf 存入文件 fprintf.out 中
  fprintf(HHH , "%s" , "Yo_this_HHH_红花会.\n");

  // 定义文件流 fp
  FILE *fp;
  fp = fopen("fgetc.out" , "w+");

  // 判断是否错误
  if (NULL == fp) {
    fprintf(stderr , "fopen error: %s\n" ,
                      strerror(errno));
    // 退出程序
    exit(EXIT_FAILURE);
  }

  // 定义存放内容的变量 str
  int str[512];
  // 开始循环 读取 fprintf.out 中的内容
  for (int i = 0; i < 512; i++) {
    // 一个字符一个字符地读取
    str[i] = fgetc(HHH);
    // 判断是否读取完成
    if (feof(HHH)) {
      // 退出循环
      break;
    }
  }

  // 循环将数据存入 fgetc.out
  for (int i = 0; i < 512; i++) {
    // 一个字符一个字符地存入文件
    fputc(str[i] , fp);
  }

  // 关闭流 HHH、fp 防止内存泄漏
  fclose(HHH);
  fclose(fp);
  return 0;
}
