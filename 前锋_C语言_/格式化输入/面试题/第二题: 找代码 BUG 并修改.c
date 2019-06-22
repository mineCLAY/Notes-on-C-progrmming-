/*
 * 02. 找出下面代码的问题
 * 并提供解决方案
 */

// 原代码:

#if (0)

#include <stdio.h>

int main(void) {

  char c[5];
  int i = 0;

  printf("输入数据(Abraham):\n"); // 叫用户输入数据

  // 循环输入五次
  for (i = 0; i < 5; ++i) {
    scanf("%c " , c[i]);
  }

  // 输出数据
  printf("输出数据:\n");
  printf("%s\n" , c);

  return 0;
}

#endif

/*
 * 错误原因:
 *
 * %c 会将 换行 读入
 * 所以用户如果输入一个字符直接按换行(Enter)
 * 那么 c 数组中会有一个变量为 换行符
 */

/*
 * 解决方案:
 *
 * 在 %c 后面加个空格
 * 让 换行 与空格对应
 */

#include <stdio.h>

int main(void) {

  char c[5];
  int i = 0;

  printf("输入数据(Abraham):\n"); // 叫用户输入数据

  // 循环输入五次
  for (i = 0; i < 5; ++i) {
    scanf("%c " , &c[i]);
  }

  // 输出数据
  printf("输出数据:\n");
  printf("%s\n" , c);

  return 0;
}

/*
 * 利用了编译器 判帮我判断 BUG
 */
