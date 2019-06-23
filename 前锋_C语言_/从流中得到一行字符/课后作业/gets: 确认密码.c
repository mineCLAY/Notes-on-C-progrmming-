/*
 * 9.02 Example_gets.c
 */

#include <stdio.h>

int main(void) {

  // 用 gets 读入 用户名
  printf("输入用户名:\n");
  char username[256];
  gets(username);
  // 输出 账号
  printf("用户名是: %s\n" , username);

  // 用 gets 读入 密码
  printf("输入密码:\n");
  char password[256];
  gets(password);

  // 叫用户重新输入密码
  printf("确认密码(重新输入密码):\n");
  char real_password[256];
  gets(real_password);
  // 判断用户是否输入正确
  if (real_password == password) {
    // 输入正确则输出 密码
    printf("你两次输入的不一致!\n" , real_password);
  } else {
    // 输出 密码
    printf("密码是: %s\n" , real_password);
  }
  /*
   * 这里我很懵
   * 不是应该 != 才算不能等于么
   * 结果却反
   */

  return 0;
}
