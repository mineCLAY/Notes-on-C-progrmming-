/*
 * 课后思考题 -- 什么情况?
 *
 * void main() {
 *   int *p , i , a[10];
 *   p = a;
 *   for (i = 0; i < 10; i++) {
 *     scanf("%d" , p++);
 *   }
 *   printf("\n");
 *   for (i = 0; i < 10; i++ , p++) {
 *     printf("%d" , *p);
 *   }
 * }
 */

#if 0

错误原因:

void main() {
  int *p , i , a[10];
  p = a;
  for (i = 0; i < 10; i++) {        // 循环结束后 p 已经等于 a[10]
    scanf("%d" , p++);
  } 
  printf("\n");
  for (i = 0; i < 10; i++ , p++) {  // p 继续自加就会超出数组的元素范围
    printf("%d" , *p);
  }
}

#endif

// 解决方案:

#include <stdio.h>

void main() {
  int *p , i , a[10];
  p = a;
  for (i = 0; i < 10; i++) {        // 循环结束后 p 已经等于 a[10]
    scanf("%d" , p++);
  } 
  printf("\n");
  p = a;                            // 将 p 重置为 a 数组第一元素
  for (i = 0; i < 10; i++ , p++) {
    printf("%d " , *p);
  }
  putchar('\n');
}
