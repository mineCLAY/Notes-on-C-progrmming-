/*
 * 定义函数 MallocSLL
 * 实现获取空闲分量位置
 */
int MallocSLL(StaticLinkList space) {

  // 定义存储空闲分量位置的变量
  int i = space[0].cur;

  // 判断 space 是否为空链表
  if (space[0].cur) {

    /*
     * 将空闲位置游标
     * 赋值给下标为 0 的分量
     */
    space[0].cur = space[i].cur;

  }

  // 返回空闲分量位置
  return i;
}

/*
 * 在静态链表 L 中
 * 第 i 个元素之前
 * 插入新的数据元素 e
 */
Statua ListInsert(Static L , int i , ElemType e) {

  // 定义存储空闲分量位置的变量
  int j;
  // 定义存储最后元素下标的变量
  int k;

  // 数组最后一个元素下标给 k
  k = MAX_SIZE - 1;

  // 判断链表是否正常
  if ((1 > i) || (ListLength(L) + 1)) {

    // 返回错误
    return ERROR;

  }

  /*
   * 调用函数将空闲分量
   * 位置赋给变量 j
   */
  j = MallocSLL(L);

  // 判断链表是否正常
  if (j) {

    // 将数据 e 赋值给空闲位置
    L[j].data = e;

    // 开始循环
    for (int l = 1; l <= i - 1; l++) {

      /*
       * k 移动到 i
       * 之前一个元素下标
       */
      k = L[k].cur;
  
    }
  
    /*
     * 将第 k 元素的
     * 游标赋值给第 j
     * 元素的游标
     * 实现让 j 元素
     * 指向原本 k 元素
     * 指向的下一个元素
     */
    L[j].cur = L[k].cur;
    /*
     * 将 j 元素的
     * 下标赋值给 k
     * 元素的游标
     * 让 k 元素
     * 指向的下一个
     * 元素为 j 元素
     * 实现插入操作
     */
    L[k].cur = j;

  }

  return TRUE;
}
