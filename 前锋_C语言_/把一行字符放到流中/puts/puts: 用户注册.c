/*
 * 10.01 Example_puts.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  printf("Enter username:\n");
  char username[128];
  gets(username);

  puts("Enter password:");
  char *password;
  password = malloc(128);
  gets(password);

  puts("确认密码:");
  char confirm[128];
  gets(confirm);

  if (0 == strcmp(password , confirm)) {
    puts("注册成功!");
  } else {
    puts("注册失败!");
  }

  // 关闭指针 password
  free(password);

  return 0;
}
