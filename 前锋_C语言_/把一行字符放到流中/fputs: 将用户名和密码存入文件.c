/*
 * 10.02 Example_fputs.c
 *
 * 将用户名和密码存入文件中
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main(void) {

  printf("Enter username:\n");
  char username[128];
  gets(username);

  puts("Enter password:");
  char password[128];
  gets(password);

  puts("确认密码:");
  char confirm[128];
  gets(confirm);

  if (0 == strcmp(password , confirm)) {
    // 定义一个文件流 fp
    FILE *fp;
    char const *register_file = "refister.txt";
    fp = fopen("register_file" , "w");

    // 如果有错误
    if (NULL == fp) {
      // fprintf(stderr , "fopen error: %s\n" , strerror(errno));
      perror("fopen");
      exit(EXIT_FAILURE);
    }

    // 如果不出错
    fputs(username , fp);
    fputc('\n' , fp);
    fputs(password , fp);
    // 关闭流 fp 防止内存泄漏
    fclose(fp);
    puts("注册成功!");
  } else {
    puts("注册失败!");
  }

  return 0;
}
