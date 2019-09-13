/*
 * 线性表操作函数
 *
 * 遍历集合 B
 * 中的每个元素
 * 判断当前元素
 * 是否存在 A 中
 * 若不存在
 * 则插入 A 中即可
 *
 * InitList(*L)
 * 初始化操作
 * 建立一个空的线性表 L
 *
 * ListEmpty(L)
 * 判断线性表是否为空表
 * 若线性表为空
 * 返回 true
 * 否则返回 false
 *
 * ClearList(*L)
 * 将线性表清空
 *
 * GetElem(L , i , *e)
 * 将线性表 L 中的
 * 第 i 个位置元素值返回给 e
 *
 * LocateElem(L , e)
 * 在线性表 L 中查找和
 * 给定值 e 相等的元素
 * 如果查找成功
 * 返回该元素在表中
 * 序号表示成功
 * 否则
 * 返回 0 表示失败
 *
 * ListInsert(*L , i , e)
 * 在线性表 L 中
 * 第 i 个位置插入新元素  e
 *
 * ListDelete(*L , i , *e)
 * 删除线性表 L 中第 i
 * 个位置元素
 * 并用 e 返回其值
 *
 * ListLength(L)
 * 返回线性表 L 的元素个数
 */

/*
 * 实现线性表集合的
 * 函数 UnionList
 * (两个参数由调用
 * 其的函数传递)
 */
void UnionList(List *lA , List lA) {

  // 定义变量
  int listALen
  int listBLen;

  // 定义中间变量
  ElemType temp;

  // 获取两个线性表长度
  listAlen = ListLength(lA);
  listBLen = ListLength(lB);

  // 开始循环
  for (int i = 0; i < listBLen; i++) {

    /*
     * 获取线性表 lB的
     * 第 i 个元素
     * 返回赋给 e
     */
    GetElem(lB , i , &temp);

    /*
     * 判断线性表 lB
     * 第 i 个元素
     * 是否和线性表 lB
     * 第 i 个元素 (e)
     * 是否存在
     * 若不存在就插入
     */
    if (0 == LocateElem(lB , e)) {

      /*
       * 将线性表 lB
       * 第 i 个元素
       * 插入 lA
       * 第 i + 1 个位置
       */
      ListInsert(*LA , ++i , temp);

    }

  }

  return 0;
}
