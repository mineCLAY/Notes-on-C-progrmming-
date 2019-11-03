/*
 * 循环链表的删除操作
 */

/*
 * 定义删除链表中
 * 某个结点的函数
 */
void CircularDelete(node **pNode , int location) {

  // 定义目标结点指针
  node *target;
  // 定义临时结点
  node *temp;

  // 定义存储位置的变量
  int j = 1;

  /*
   * 判断要删除的位置
   * 是否是第一个结点
   */
  if (1 == i) {

    // 找到最后一个结点
    for (target = *pNode; target -> next != *pNode; target = target -> next)
      ;

    // 让 temp 指向第一个结点
    temp = *pNode;
    // 让头指针移动到下一个结点
    *pNode = (*pNode) -> next;
    /*
     * 让最后一个结点的 next
     * 指向新的头结点
     * (完成删除)
     */
    target -> next = *pNode;
    /*
     * 释放要删除的结点的内存
     * (temp 指向的内存)
     */
    free(temp);

  } else {

    // 查找要删除的结点的前一个结点
    for (target = *pNode; j < (i - 1); ++j){

      target = target -> next;

    }

    // 让 temp 指向要删除的结点
    temp = target -> next;
    /*
     * 让要删除的结点的前一个
     * 结点的 next 指向
     * 要删除的结点的 next
     * (完成删除)
     */
    target -> next = temp -> next;
    /*
     * 释放要删除的结点的内存
     * (temp 指向的内存)
     */
    free(temp);

  }

}
