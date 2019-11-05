/*
 * 41 个人排成一个圆圈
 * 由第 1 个人开始报数
 * 每报数到第 3 人
 * 该人就自杀
 * 然后再由下一个重新报数
 * 直到所有人都自杀身亡为止
 */

// 导入函数库
#include <iostream>
#include <stdlib.h>
#include <errno.h>

using namespace std;

// 声明结构体类型
typedef struct Node {

  /*
   * 定义指向下一个
   * 结点的指针变量
   */
  struct Node *next;
  // 定义存储死亡顺序的变量
  int suicideOrder;

} node;

// 定义实现此算法的函数
void KillList(int n) {

  // 定义指向链表的标识指针
  node *peugeot = NULL;
  // 定义头指针
  node *head;
  // 定义临时指针
  node *t = head;

  // 让标识指针指向头指针
  peugeot = head;

  // 给各个结点的密码赋值
  for (int i = 0; i < n; i++) {

    // 定义临时结点
    node *temp;
    // 给临时结点分配空间
    temp = (node *) malloc (sizeof(node));

    // 判断分配内存时是否出错
    if (!(temp))
      // 退出程序
      exit(EXIT_FAILURE);

    /*
     * 让标识指针的 next 
     * 指针指向临时结点
     */
    peugeot -> next = temp;
    // 标识指针移动到 next 结点
    peugeot = peugeot -> next;

  }

  // 让 p (尾部结点) 指向头指针
  peugeot -> next = head -> next;

  // 让标识指针指向头指针
  peugeot = head;

  // 循环控制人数
  for (int i = 0; i < n; i++) {

    // 开始循环自杀
    for (int j = 0; j < 3; j++) {

      // 让标识指针移动
      peugeot = peugeot -> next;

      // 给结点赋值死亡顺序
      peugeot -> suicideOrder = i;

    }

    // 将要被删除的结点的位置输出
    cout << "The index of kill: " << peugeot -> suicideOrder << '(' << i << ')' << '\n';

    // 删除头结点 (自杀)
    if (p == head -> next) {

      // 让 t 找到最后一个结点
      for (; t -> next != head -> next; )
        ;

      // 让头结点指向下一个结点
      head -> next = head -> next;

      /*
       * 让最后一个
       * 结点的 next 指向
       * 第一个结点
       */
      t -> next = head -> next;

    } else {

      /*
       * 找到要删除
       * 结点的前一个结点
       */
      for (t = head; peugeot != t -> next; )
        t = t -> next;

      // 删除结点 (自杀)
      t -> next = t -> next;

    }

  }

}

// 程序入口
int main(int argc , char const *argv[]) {

  // 调用函数实现自杀链表
  KillList(41);

  return 0;
}
