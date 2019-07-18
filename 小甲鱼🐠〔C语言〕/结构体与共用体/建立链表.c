/*
 * 建立链表
 */

#include <stdio.h>

// 定义结构体类型 student
struct student {

  int num;
  float score;
  struct student *next;

}
// 定义四个结构体变量
a , b , c , *head;

int main(void) {

  // 对结构体变量赋初值
  a.num = 1009;
  a.score = 99.5;
  b.num = 1005;
  b.score = 85.5;
  c.num = 1006;
  c.score = 86.5;

  // 建立链表
  head = &a;
  a.next = &b;
  b.next = &c;
  c.next = NULL;

  // 循环输出结果
  do {
    printf("%ld %.1f\n" ,
           head -> num , head -> score);
    head = head -> next;
  } while (head);

  return 0;
}
