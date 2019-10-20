/*
 * 静态链表的删除操作
 */

// 声明函数 FreeSLL
void FreeSLL(StaticLinkList , int);

// 声明函数 ListLength
void ListLength(StaticLinkList);

/*
 * 定义函数 ListDelete
 * 实现删除在静态链表第 i 个元素
 */
Sta ListDelete(StaticLinkList L , int i) {

  // 定义变量
  int j , k;

  // 判断删除位置是否不正常
  if ((1 > i) || (ListLength(L) < i)) {

    // 返回错误
    return ERROR;

  }

  // 让 k 获取最后一个元素
  k = MAX_SIZE - 1;

  // 开始循环
  for (j = 1; j <= i - 1; j++) {

    // 开始递进
    k = L[k].cur;
    /*
     * 第一次 k = 1
     * 第二次 k = L[1].cur
     * 因为 i - 1 = 2 所以结束
     */

  }

  // 开始删除
  j = L[k].cur;
  L[k].cur = L[j].cur;

  /*
   * 调用函数 FreeSLL
   * 回收空闲结点
   */
  FreeSLL(L , j);

  return TRUE;
}

/*
 * 定义函数
 * 实现将下标为 k
 * 空闲结点回收到备用链表
 */
void FreeSLL(StaticLinkList space , int k) {

  // 开始删除
  space[k].cur = space[0].cur;
  space[0].cur = k;

}

/*
 * 定义函数 ListLength
 * 实现返回静态链表中数据元素个数
 */
int ListLength(StaticLinkList L) {

  // 定义存储长度的变量
  int length;
  // 定义静态链表下标的变量
  int i = L[MAXSIZE - 1].cur;

  // 开始便利静态链表
  while (i) {

    // 开始递进
    i = L[i].cur;

    // length 加一
    length++;

  }

}
