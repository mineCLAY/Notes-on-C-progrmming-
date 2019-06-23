/*
 * 9.02 Example_gets.c
 */

#include <stdio.h>

int main(void) {

  // 用 gets 读入 用户名
  printf("输入用户名:\n");
  char username[256];
  gets(username);
  // 输出结果
  printf("用户名是: %s\n" , username);

  // 用 gets 读入 密码
  printf("输入密码:\n");
  char password[256];
  gets(password);
  printf("密码是: %s\n" , password);

  return 0;
}
