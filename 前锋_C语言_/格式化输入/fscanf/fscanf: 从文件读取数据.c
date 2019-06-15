/*
 * 5.04 Example_fprintf_up.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(void) {

  FILE *stream = fopen("fscanf.out" , "w");
  if (NULL == stream) {
    fprintf(stderr , "fopen error: %s\n" , strerror(errno));
    exit(EXIT_FAILURE);
  } else {
    fprintf(stream , "%s%ld%f%c" , "Hu" , 65000L , 3.14159 , 'x');
    // 将指针设置至文件开头
    fseek(stream , 0L , SEEK_SET);

    // 从文件中读取数据
    char s[128];
    fscanf(stream , "%5s" , s);
    long l;
    fscanf(stream , "%5ld" , &l);
    float f;
    fscanf(stream , "%f" , &f);
    char c;
    fscanf(stream , "%c" , &c);

    // 输出读取的数据
    printf("%s\n" , s);
    printf("%ld\n" , l);
    printf("%f\n" , f);
    printf("%c\n" , c);

    fclose(stream);
  }

  return 0;
}
