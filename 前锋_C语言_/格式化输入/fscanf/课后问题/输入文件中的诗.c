/*
 * 编程实现
 * 把一个你最喜欢的一首诗从文件中读出来显示在屏幕上
 * 要求:
 * 格式要美观
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(void) {

  FILE *stream = fopen("fscanf.out" , "w+");
  if (NULL == stream) {
    fprintf(stream , "fopen error: %s\n" , strerror(errno));
    exit(EXIT_FAILURE);
  } else {
    fprintf(stream , "%s%s%s%s%s%s%s%s" ,
                     "HC " , "is " , "the " ,
                     "most " , "handsome , " ,
                     "like " , "Hu " , "Jingwen.");
    // 将指针设置至文件开头
    fseek(stream , 0L , SEEK_SET);

    // 从文件中读取数据
    char *str;
    fscanf(stream , "%s" , str);
    char *s;
    fscanf(stream , "%s" , s);
    char *s1;
    fscanf(stream , "%s" , s1);
    char *s2;
    fscanf(stream , "%s" , s2);
    char *s3;
    fscanf(stream , "%s" , s3);
    char *s4;
    fscanf(stream , "%s" , s4);
    char *s5;
    fscanf(stream , "%s" , s5);
    char *s6;
    fscanf(stream , "%s" , s6);

    // 输出读取的数据
    printf("%s " , str);
    printf("%s " , s);
    printf("%s " , s1);
    printf("%s " , s2);
    printf("%s " , s3);
    printf("%s " , s4);
    printf("%s " , s5);
    printf("%s " , s6);
  }

  return 0;
}
