/*
 * 5.07 IPP_fscanf.c
 *
 * 把文件中的数据的五个字段
 * 赋给相应的五个变量
 * 并且输出这些变量的值
 * 五个字段如:
 * 路飞 19 未婚 1.74 许多条类似的记录
 * 都要以 ',' 分割.
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(void) {

  FILE *stream;
  char name[64];
  char sex[8];
  long age = 0;
  char marriage;
  double height;
  memset(name , 0 , 64);                                         // 清空 name 数组
  memset(sex , 0 , 8);                                           // 清空 sex 数组

  stream = fopen("fscnaf.out" , "w+");
  if (NULL == stream) {
    fprintf(stderr , "fopen error: %s\n" , strerror(errno));     // 输出错误的信息
    exit(EXIT_FAILURE);                                          // 如果有错误 就退出
  } else {
    // 将数据写入文件
    fprintf(stream , "%s , %s , %ld , %c , %lf" ,
                      "山治" , "男" , 21L , 'N' , 1.80f);         // 写入 山治 的属性
    fprintf(stream , "%c" , '\n');                               // 写入换行
    fprintf(stream , "%s , %s , %ld , %c , %lf" ,
                      "妮可 . 罗宾" , "女" , 30L , 'N' , 1.86f);  // 写入 妮可 . 罗宾 的属性

    // 将指针设置至文件开头
    fseek(stream , 0L , SEEK_SET);

    // 去除第一行数据
    fscanf(stream , "%6s , %3s , %ld , %c , %lf\n" ,
                     name , sex , &age , &marriage ,
                     &height);
    // 取出第二行数据
    fscanf(stream , "%13s , %3s , %ld , %c , %lf\n" ,
                     name , sex , &age , &marriage , &height);

    printf("%s , %s , %ld , %c , %lf\n" ,
            name , sex , age , marriage ,
            height);                                             // 输出取出的数据

    fclose(stream);
  }

  return 0;
}
