/*
 * 编程模拟实现登录一个系统
 * 输入用户名、密码
 * 用户名和密码存储在一个注册文件里
 * 用户名和密码正确
 * 输出 "登入成功"
 * 否则
 * 输出 "登录失败"
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(void) {

  // 定义所需变量
  int i;
  char username[128];
  char password[128];
  char confirm[128];
  char real_username[128];
  char real_password[128];
  // 定义文件流 fp
  FILE *fp;
  fp = fopen("register_file.out" , "rt");

  // 叫用户输入 用户名
  puts("Enter username:");
  gets(username);

  // 叫用户输入 密码
  puts("Enter password:");
  gets(password);

  // 叫用户输入 确认密码
  puts("Enter confirm password:");
  gets(confirm);

  if (0 == strcmp(password , confirm)) {
    if (NULL == fp) {
      perror("fopen");
      exit(EXIT_FAILURE);
    }

    // 开始循环读取文件中的 用户名 和 密码
    for (i = 0; i <= 127; i++) {
      // 读取 用户名
      fscanf(fp , "%[^\n]%c" , real_username);
      // 读取 密码
      fscanf(fp , "%[^\n]%c" , real_password);
      if ((0 == strcmp(username , real_username)) &&
          (0 == strcmp(password , real_password))) {
        puts("登陆成功!""");
      }
    }

  } else {
    puts("登录错误!");
  }

  return 0;
}
