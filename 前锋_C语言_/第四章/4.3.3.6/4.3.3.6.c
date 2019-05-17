/*
 * liu韵姿 择偶的标准:
 * 01. 男性
 * 02. 年龄大于或等于 22 周岁
 * 03. 并且小于 40 周岁
 */

#include <stdio.h>

int main(void){
  printf("输入一个性别 , 只能输入 m(男生) or f(女生)\n");
  char buf[256];
  fgets (buf , sizeof(buf) , stdin);
  char gender;
  sscanf(buf , "%c" , &gender);
  printf("How old are you?\n");
  fgets (buf , sizeof(buf) , stdin);
  short age;
  sscanf(buf , "%hd" , &age);
  if (gender == 'm' && (age >= 22) && (age < 40)){
    printf("明天我要嫁给你啦!\n");
  } else {
    printf("你是不是该安静地走开!\n");
  }
  return 0;
}
