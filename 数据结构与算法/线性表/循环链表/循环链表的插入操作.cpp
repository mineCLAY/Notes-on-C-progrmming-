/*
 * 循环链表的插入操作
 * (InsertionOfTheCircularList)
 */

// 导入函数库
#include <iostream>
#include <stdlib>

using namespace std;

// 循环链表存储结构的定义
typedef struct CircularList {

  // 定义存储数据的变量
  int data;
  /*
   * 定义存储指向下一个
   * 结点的指针变量
   */
  struct CircularList *next;

} node;

/*
 * 定义实现将一个
 * 数据插入链表的函数
 *
 * 参数:
 * 链表第一个结点 , 插入位置
 */
void CircularListInsertion(node **pNode , int location) {

  // 定义临时链表结点
  node *temp;
  // 定义另一个临时结点
  node *t;
  // 定义目标结点指针
  node *target;

  // 定义存储要插入值的变量
  int item;
  // 定义存储位置的变量
  int j;

  // 叫用户输入结点的值
  cout << "Enter the number of inser node: " << endl;
  // 将输入的值赋值给变量
  cin >> item;

  /*
   * 判断新插入的结点
   * 是否作为第一个结点
   */
  if (1 == location) {

    // 给新结点分配内存 (空间)
    temp = (node *) malloc (sizeof(struct CircularList));

    // 判断分配内存时是否出错
    if (!temp)
      // 退出程序
      exit(0);

    // 给 temp 结点的数据赋值
    temp -> data = item;

    // 寻找最后一个结点
    for (target = (*pNode); target -> next != (*pNode); target = target -> next)
      ;

    /*
     * 让现在第一个结点
     * 指向原本的尾部
     * (指向第一个结点的结点)
     */
    temp -> (*pNode);
    /*
     * 原本的尾部指向
     * 现在第一个结点
     */
    target -> next = temp;
    // 指针指向第一个结点
    *pNode = temp;

  } else {

    // 目标指针指向第一个结点
    target = *pNode;

    // 循环移动到要插入的位置
    for (; j < (i - 1); ++j) {

      // 开始移动
      target = target -> next;

    }

    // 给临时结点分配内存 (空间)
    temp = (node *) malloc (sizeof(struct CircularList));

    // 判断分配内存时是否出错
    if (!temp)
      // 退出程序
      exit(0);

    // 给临时变量赋值
    temp -> data = item;

    /*
     * 让另一个临时结点存储要
     * 插入位置的结点
     */
    t = target -> next;
    /*
     * 让要插入位置
     * 前一个结点 next 指向
     * 要插入的结点
     */
     targe -> = temp;
     /*
      * 让新插入的结点指向
      * 原本的插入位置
      * 存储的结点 (恢复链表)
      */
     temp -> next = p;

  }

}
