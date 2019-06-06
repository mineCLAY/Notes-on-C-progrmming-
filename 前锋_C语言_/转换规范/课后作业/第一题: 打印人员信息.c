/*
 * 01.
 * 利用 printf 打印一个你家庭的人员信息表
 * 列如:
 * 人名、年龄(按 2019 年)、生日、电话号码(隐私 所以用假的)等等
 * 要求:
 * 格式对齐、漂亮、清晰
 */

#include <stdio.h>

int main(void) {
  char* name = "MineHC";
  char* age = "12 years old";
  char* birthday = "October 12 , 2006";
  char* telephone_number = "MineHC_666";

  // 输出 人名
  printf("name: %s\n" , "MineHC");

  // 输出 年龄
  printf("age: %s\n" , "12 years old");

  // 输出 生日
  printf("birthday: %s\n" , "October 12 , 2006");

  // 输出 电话号码
  printf("telephone number: %s\n" , "MineHC_666");
  
  getchar();
  /*
   * 让程序停一下
   * 不会立刻闪退
   */
  return 0;
}

/*
 * 虽然定义了指针的各种数值
 * 但是不用
 * 因为:
 * 这章学的有: %s
 */
