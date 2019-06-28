/*
 * Problem NO.THREE
 *
 * 编程实现
 * 从键盘输入 4 个整数
 * 分别代表 IP 地址的 4 个域
 * 然后把这个域再组合成一个 IP 地址的字符串
 * 存储并打印出来
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void) {

  // 定义所需变量
  char IP[32];

  // 叫用户输入 IP
  puts("Enter you IP:");
  // 将用户输入的值存入变量中
  scanf("%[^\n]" , IP);

  // 定义文件流 fp
  FILE *fp;
  fp = fopen("IP.c" , "w+");

  // 判断是否出错
  if (NULL == fp) {
    /*
     * 如果出错
     * 则打印错误信息
     */
    fprintf(stderr , "fopen error: %s\n" ,
            strerror(errno));
  }

  // 将用户输入的 IP 存入文件
  fputs(IP , fp);
  // 输出结果 IP
  printf("%s\n" , IP);

  return 0;
}
