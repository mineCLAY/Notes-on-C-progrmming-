/*
 * 重构: 将 fputs_Example 健壮性处理
 *
 * 11.07 Example_fputs_Refactoring.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc , char *argv[]) {

  if (argc < 2) {
    // 教用户 输入格式
    fprintf(stderr , "Usage: %s <file_name>" ,
            argv[0]);
    exit(EXIT_FAILURE);
  }

  puts("Enter username:");
  char username[128];
  gets(username);

  puts("Enter password:");
  char password[128];
  gets(password);

  puts("Enter confirm password:");
  char confirm[128];
  gets(confirm);

  if (0 == strcmp(password , confirm)) {
    FILE *fp;
    if (NULL == (fp = fopen(argv[1] , "w"))) {
      fprintf(stderr , "fopen error: %s\n" ,
             (char *)strerror(errno));
      exit(EXIT_FAILURE);
    }

    if (EOF == fputs(username , fp)) {
      fprintf(stderr , "fputc");
      fclose(fp);
      exit(EXIT_FAILURE);
    }

    if (EOF == fputc('\n' , fp)) {
      fprintf(stderr , "fputc error: %s\n" ,
              strerror(errno));
      fclose(fp);
      exit(EXIT_FAILURE);
    }

    if (EOF == fputs(password , fp)) {
      fprintf(stderr , "fputs error: %s\n" ,
              strerror(errno));
    }
    fclose(fp);
    puts("注册成功!");
  } else {
    puts("注册失败!");
  }

  return 0;
}
