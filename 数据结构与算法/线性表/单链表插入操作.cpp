/*
 * 单链表插入操作
 */

Status ListInsert(LinkList *L , EmlemType temp) {

  /*
   * 定义存储
   * 位置的变量
   */
  int position;
  /*
   * 定义存储
   * 结点的临时变量
   */
  LinkList *t;

  // 创建链表
  List list;

  /*
   * 定义线性表类型
   * 指针变量
   * 让指针 p
   * 指向 list 线性表
   * 的头指针
   */
  List *p = list;

  // 开始循环查找
  for (position = 1; position <= temp; position++) {

    // 开始递进结点
    p = p -> next;

  }

  /*
   * 判断是否没有
   * 找到插入位置
   */
  if (position > list.length) {

    // 返回错误
    return ERROR;

  }

  // 开始插入数据
  t = p -> next;
  p -> next = temp;
  p = p -> next;
  p -> next  = t;

  return TRUE;
}
