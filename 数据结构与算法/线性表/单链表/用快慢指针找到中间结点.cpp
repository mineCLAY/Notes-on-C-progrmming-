/*
 * 迅速找到未知长度的单链表的中间结点
 *
 * 利用快慢指针巧妙完成
 * 设置两个指针 *search , *mid
 * 都指向单链表的头结点
 * 其中 *search 的
 * 移动速度是 *mid 的 2 倍
 * 当 *search 指向末尾结点的时候
 * mid 正好在中间了
 * 这就是标尺的思想
 */

/*
 * 定义函数 GetMidNode
 * 实现找到单链表的中间结点 
 */
Status GetMidNode(LinkList L， ElemType *e) {

  // 定义两个指针变量
  LinkList search , mid;

  // 让指针变量指向头结点
  mid = search = L;

  /*
   * 循环条件:
   * NULL != search -> next
   * 若符合则
   * 开始循环
   */
  while (NULL != search -> next) {

    /*
     * 判断 search 后两个
     * 结点是否为 NULL
     */
    if (NULL = search -> next -> next) {

      //  让 search 指向后两个结点
      search = search -> next -> next;

      // 让 mid 指向下一个结点
      mid = mid -> next

    } else {

    // 返回错误
    return ERROR;

    }

  }

  /*
   * 将找到的中间
   * 结点的数据赋值给 e
   */
  *e = mid -> data;

  return TRUE;

}
