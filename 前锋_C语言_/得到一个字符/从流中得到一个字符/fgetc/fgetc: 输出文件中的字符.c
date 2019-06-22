/*
 * 6.03 Example_fgetc.c
 *
 * 输出文件中的字符串
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  // Linux & Mac 命令行指令
  system("echo \"The hand of the dilignt will tule. But the slack hand will be put to forced labor\" > fgetc.out");

  // 定义流 fp
  FILE *fp;
  fp = fopen("fgetc.out" , "r");

  // 判断是否出错
  if (NULL == fp) {
    perror("fopen"); // 输出错误信息
    return -1; // 终止程序
  }

  // 开始循环 读取内容
  do {
    int c = fgetc(fp);
    if (feof(fp)) { // 如果读取完成
      break; // 则退出循环
    }
    printf("%c" , c); // 输出读取的字符串
  } while (1);

  // 关闭流 fp 防止内存泄露
  fclose(fp);

  return 0;
}
