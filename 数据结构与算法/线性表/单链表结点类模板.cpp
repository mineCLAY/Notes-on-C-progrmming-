/*
 * 单链表的结点类模板举例
 */

// 定义模板
template <class Type>
// 定义类 Node
class Node {

// 私有
private:
  // 指向后继结点的指针
  Node <Type> *next;

// 公有
public:
  // 构造函数
  Node(const Type &data , Node <Type> *next = 0) {

    this -> data = data;
    this -> next = next;

  }

  // 存储数据
  Type data;

  // 插入函数
  void InsertAfter(Node <Type> *point) {

    // point 结点指针域指向当前结点的后继结点
    point -> next = next;
    // 当前结点的指针域指向 point
    next = point;

  }

  // 删除函数
  Node <Type> *DleteAfter(void) {

    // 定义临时结点
    Node <Type> *tempPtr = next;

    // 判断下一个结点是否不存在
    if (0 == next)
      // 返回 0
      return 0;

      // 删除结点
      next = tempPtr -> next;

      // 返回删除的结点
      return tempPtr;

  }

  // 返回下一个指针的地址
  Node <Type> *NextNode() {

    // 返回下一个结点的地址
    return next;

  }

  // 返回下一个指针的地址 (const)
  const Node <Type> *NextNode() const {

    // 返回下一个结点的地址
    return next;

  }

  // 析构函数
  virtual ~Node() {

    // dtor

  }

};
