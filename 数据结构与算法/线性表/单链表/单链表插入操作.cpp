/*
 * 单链表插入操作
 */

Status ListInsert(LinkList *L , int po , ElemType temp) {

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
   * 定义线性表类型
   * 指针变量
   * 让指针 position
   * 指向 list 线性表
   * 的头指针
   */
  p = *L;

  // 开始循环查找
  for (position = 1; p && (position < po); position++) {

    // 开始递进结点
    p = p -> next;

  }

  /*
   * 判断是否没有
   * 找到插入位置
   */
  if (!p || position > po) {

    // 返回错误
    return ERROR;

  }

  /*
   * 给临时指针
   * 变量分配内存
   */
  t = (LinkList) malloc (sizeof(Node));
  // 将数据赋值给成员变量
  t -> data = temp;

  // 开始插入数据
  t -> next = p -> next;
  p -> next = t;

  return TRUE;
}
