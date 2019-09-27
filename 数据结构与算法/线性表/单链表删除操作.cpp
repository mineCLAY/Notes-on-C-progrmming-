/*
 * 单链表删除操作
 */

Status ListDelete(LinkList *L , int po , ElemType temp) {

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
  // 定义指向链表指针变量
  LinkList *p;

  /*
   * 让指针变量 p
   * 指向链表第一个结点
   */
  p = *L;

  // 开始循环遍历
  while (p && position < po) {

    /*
     * 开始移动指针变量
     * 指向的链表位置
     */
    p = p -> next;
    // 让存储位置变量自加
    position++;

  }

  // 判断是否出错
  if (!(p -> next) || (position > po)) {

    // 返回错误
    return ERROR;

  }

  // 给指针变量分配内存
  t = (List *) malloc (sizeof(Node));

  // 开始删除
  t = p -> next;
  p -> next = t -> next;
  

  /*
   * 释放指针变量
   * 指向的内存
   */
  delete t;
  /*
   * 将 NULL 赋给指针变量
   * 使它不为野指针
   */
  t = NULL;

  return TRUE;
}
