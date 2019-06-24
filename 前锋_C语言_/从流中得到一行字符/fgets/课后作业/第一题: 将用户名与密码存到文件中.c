/*
 * 键盘输入你的用户名、密码、确认密码
 * 如果两次密码不一样就提示错误
 *
 * 如果正确就把用户名、密码
 * 存入
 * 以 "用户名" 命名的文件中
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(void) {

  // 定义存放用户名的数组
  char username[64];
  // 叫用户输入 用户名
  printf("Enter username:\n");
  // 将用户输入的一串字符存入 username 数组
  gets(username);

  // 定义存放密码的数组
  char password[64];
  // 叫用户输入  密码
  printf("Enter password:\n");
  // 将用户输入的一串字符存入 password
  gets(password);

  // 定义存放确认密码的数组
  char password_2[64];
  // 叫用户输入 确认密码 
  printf("重新输入密码 以确定密码:\n");
  // 将用户输入的一串字符存入 password_2
  gets(password_2);

  // 判断两次输入的密码是否一致
  if (password != password_2) {
    // 如果一致 则输出用户名和密码
    printf("username: %s\n" ,
            username);
    // 输出密码
    printf("password: %s\n" ,
            password);

    // 定义文件流 fp
    FILE *fp;
    fp = fopen("用户名.out" , "w+");

    // 如果 出错
    if (NULL == fp) {
      // 则输出信息
      fprintf(stderr , "fopen error: %s\n" ,
              strerror(errno));
      // 退出程序
      exit(EXIT_FAILURE);
    }

    // 然后存入 "用户名" 文件中
    fgets(username , 64 ,fp);
    fgets(password , 64 , fp);

    // 关闭流 fp 防止内存泄露
    fclose(fp);

  } else { // 如果不一致
    printf("错误:\n");
    printf("两次输入的密码不一致.\n");
  }

  return 0;
}
