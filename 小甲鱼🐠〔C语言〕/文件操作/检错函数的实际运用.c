/*
 * Example_ftell
 *
 * ftell 得到文件中的当前位置
 * 用相对于文件开头的位移量来表示
 * 返回当前位置
 * 出错时返回 -1L 
 *
 * Example_ferror
 *
 * ferror 返回 0
 * 表示未出错
 * 返回非 0
 * 表示出错
 * 在调用一个输入输出函数后立即
 * 检查 ferror 函数的值
 * 否则信息会丢失
 *
 * Example_clearerr
 *
 * 使文件错误标志和
 * 文件结束标志置为 0
 * 只要出现错误标志
 * 就一直保留
 * 直到对同一文件调用
 * clearerr 函数或 rewind 函数
 * 或任何其他一个输入输出函数
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void) {

  // 定义文件指针
  FILE *fp;
  fp = fopen("HC_talk.c" , "w+");

  // 判断是否出错
  if (NULL == fp) {
    // 输出错误信息
    fprintf(stderr , "fopen error: %s\n" ,
            strerror(errno));
    // 结束程序
    exit(EXIT_FAILURE);
  }

  // 向文件写入数据
  fputs("I'm GOD" , fp);
  /*
   * 调用 ferror 函数
   * 判断写入是否出错
   */
  if (0 != ferror(fp)) {
    // 输出错误信息
    fprintf(stderr , "fopen error: %s\n" ,
            strerror(errno));
    // 退出程序
    exit(EXIT_FAILURE);
  }

  /*
   * 调用 ftell 函数
   * 输出此时位置指针的位置
   */
  printf("\npoiter: %d\n" ,
          ftell(fp));

  /*
   * 调用 clearerr 函数
   * 将错误标志清除
   */
  clearerr(fp);

  // 关闭文件流 fp 防止内存泄露
  fclose(fp);

  return 0;
}
