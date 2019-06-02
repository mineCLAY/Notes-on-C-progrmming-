/*
 * 2.01_Type_Character.c
 *
 * 类型字符:
 * 类型字符 , 用于规定输出的类型.
 * 类型字符有: %、d、i、u、o、x、X、F、
 *             e、E、g、G、ａ、Ａ、c、s、P、n.
 */
#include <stdio.h>

int main(void) {
  // 01. %%
  printf("输出字符 %% 本身.\n");
  printf("%%\n");

  // 02. %d , %i
  printf("参数作为一个十进制整数打印.\n");
  // i 可以根据书写的格式自动进行 8、10、16 进制
  printf("%i , %i , %i , %i\n" , 54 , 066 , 54 , 0x36);

  // 03. %u
  printf("输出十进制无符号整型.\n");
  printf("%u , %u\n" , 54 , 54u);
  
  // 04. %o
  printf("输出八进制无符号的整型.\n");
  printf("%o\n" , 54);

  // 05. %x , %X
  printf("输出十六进制小写、大写无符号整型.\n");
  printf("%x , %X\n" , 255 , 255);

  // 06. %f , %F
  printf("以小数形式输出浮点数.\n");
  printf("%f , %F" , 3.14 , 3.14);
  // 07. %e , %E
  printf("以科学计数法表示 float 或 double　型数据格式打印.\n");
  printf("%e , %E\n" , 3.14 , 3.14);

  // 08. %g , %G
  printf(" 自动将能显示的很小或很大的数以 %%f 或 %e 的格式打印.\n");
  printf("%g , %g , %G , %G\n" , 3.14 , 0.000314 , 3.14 , 0.0000314);

  // 09. %a , %A
  printf("浮点数、十六进制数字和　p- 计数法.\n");
  printf("%a , %A\n" , 3.14 , 3.14);

  // 10. %c
  printf("输出单个字符.\n");
  printf("%c\n" , 65);

  // 11. %s
  printf("输出字符串 , 知道遇到 NULL 字符.\n");
  char blessing[] = "God Bless You.";
  printf("%s\n" , blessing);

  // 12. %p
  printf("输出内存地址 , 以十六进制表示.\n");
  int password = 61;
  printf("%p\n" , &password);

  // 13. %n
  int many = 100;
  int *storage = &many;
  printf("%s %n %d\n" , blessing , storage , many);
  printf("many = %d\n" , many);

  return 0;
}
