/*
 * 返回需要查找的元素位置
 */

// 定义查找元素的函数
int NodeIocation(node *pNode , int elem) {

  // 定义可以便利链表的结点
  node *target;
  // 定义存储结点的位置的变量
  return location;

  // 开始查找元素
  for (target = pNode; target -> data != elem || target -> next != pNode; ++i) {

    // 移动指针
    target = target -> next;

  }

  // 判断元素是否不在表中
  if (target -> next == pNode)
    // 返回 -1 (不存在此元素)
    return -1;

  else
   // 返回查找的结点的位置
   return location;
}
