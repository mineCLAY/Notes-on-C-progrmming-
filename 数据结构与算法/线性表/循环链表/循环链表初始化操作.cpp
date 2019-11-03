/*
 * 循环链表初始化
 * (CircularListInitialization)
 */

// 导入函数库
#include <iostream>
#include <stdlib.h>

using namespace std;

/*
 * 定义实现初始化
 * 循环链表的函数
 * CircularListInit
 * pNode 是指向结点指针的指针
 */
void CircularListInit(node **pNode) {

  // 定义存储链结点位置的变量
  int item;
  // 定义中间结点
  node *temp;
  // 定义可以移动的结点指针
  node *target;

  // 叫用户输入结点的值
  cout << "Enter the number of node (Enter 0 exit): ";

  // 开始循环
  while (1) {

    // 获取用户输入的值
    cin >> item;

    // 释放输入流的缓冲区
    fflush(stdin);

    // 如果 item 为 0
    if (0 == item) {

      // 结束初始化程序
      return;

    }

    /*
     * 判断 *pNode
     * 存储 (指向) 的内存
     * 是否为 NULL
     *
     * 如果 *pNode
     * 存储 (指向) 的内存
     * 为 NULL
     * 说明 pNode
     * 存储的是一个空表
     * (循环链表只有一个结点)
     */
    if (NULL == (*pNode)) {

      // 给 *pNode 分配空间
      *pNode = (node*) malloc (sizeof(struct CircularLinkList));

      /*
       * 判断 *pNode 的相反值
       * 是否不为 NULL
       * (分配内存时是否出错
       *  如果分配错误则为 NULL)
       */
      if (!(*pNode)) {

        // 退出程序
        exit(0);

      }

      /*
       * 将用户输入的值
       * 赋值给唯一
       * 一个结点的数据 (data)
       */
      (*pNode) -> data = item;
      /*
       * 唯一的一个结点
       * 下一个结点为自己
       */
      (*pNode) -> next = *pNode;

    } else {

      // 查找最后一个结点
      for (target = (*pNode); target -> next != (*pNode); target = target -> next)
        ;

      // 生成一个新结点 (分配内存)
      temp = (node *) malloc (sizeof(struct CircularLinkList));

      // 判断是否分配内存时出错
      if (!temp)
        // 退出程序
        exit(0);

      // 给临时结点的数据赋值
      temp -> data = item;

      // 让 temp 指向原本的尾部
      temp -> next = *pNode;
      /*
       * 让指向最后一个
       * 结点的结点的 next 指针
       * 指向 temp 临时结点
       */
      target -> next = temp;

    }

  }

}
