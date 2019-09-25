/*
 * 插入操作
 *
 * 1. 如果插入位置不合理
 *    抛出异常
 * 2. 如果线性表长度大于等于
 *    数组长度则抛出
 *    或动态增加数组容量
 * 3. 从最后一个元素开始
 *    向前遍历到第 inPosition 个位置
 *    分别将它们
 *    都向后移动一个位置
 * 4. 将要插入元素填入
 *    位置 inPosition 处
 * 5. 线性表长 +1
 */

/*
 * 定义线性表
 * 插入操作的函数
 */
LinearTable LinearTableInsertion(List *list , int inPosition , ElemType temp) {

  /*
   * 判断插入位置
   * 是否不正常
   */
  if (MAXSIZE == inPosition) {

    // 抛出异常
    return ERROR;

  }
  if ((1 < inPosition) || ((*list).length < inPosition)) {

    // 抛出异常
    return ERROR;

  }

  // 如果要插入的位置不在结尾
  if (inPosition != (*list).length) {

    // 让线性表长度加一
    (*list).length++;

    // 开始循环
    for (int i = (*list).length - 1; i > inPosition; i--) {

      // 开始移动数据
      (*list).data[i + 1] = (*list).data[i];

    }

  }

  /*
   * 调用线性表操作
   * 函数实现插入
   */
  ListInsert(list , inPosition - 1 , temp);

  // 函数结束
  return;
}
