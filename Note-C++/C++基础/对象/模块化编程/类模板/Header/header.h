/*
 * header.h
 * 写出一个栈
 */

// 如果没有定义 HEADER_H
#ifndef HEADER_H

// 定义常量标识符 HEADER_H
#define HEADER_H

/*
 * 类模板定义类
 * 定义占位符 Type
 */
template <class Type>
/*
 * 定义类 Stack
 * 生成一个栈
 */
class Stack {

private:
  // 声明存储栈尺寸的变量
  unsigned int size;
  // 声明存储顶部数据位置的变量
  unsigned int position;
  // 声明存储数据的指针变量
  Type *data;

public:
  // 声明构造函数
  Stack(unsigned int size = 100);

  // 声明函数 Push
  void Push(Type);

  // 声明函数 Popup
  Type Popup();

  // 声明析构函数
  ~Stack();

};

/*
 * 定义构造函数 Stack
 * 实现生成一个栈
 */
template <class Type>
Stack<Type>::Stack(unsigned int size) {

  // 栈的尺寸
  this -> size = size;
  // 栈存储数据的空间大小
  data = new Type[size];
  // 栈顶部数据的位置
  position = 0;

}

/*
 * 定义函数 Push
 * 实现压入数据
 */
template <class Type>
void Stack<Type>::Push(Type value) {

  /*
   * 先存储数据
   * 然后数据顶部数据位置自加 1
   */
  data[position++] = value;

}

/*
 * 定义函数 Popup
 * 实现弹出数据
 */
template <class Type>
Type Stack<Type>::Popup() {

  /*
   * 先让顶部数据的位置自减 1
   * 因为栈中顶部位置的指针
   * 是先指向下一个数据
   * 此时这个位置是空的
   * 然后数据再压入
   * 那么这个指针应该先指向前面一个数据
   * 然后返回需要弹出的数据
   */
  return data[--position];

}

/*
 * 定义析构函数 ~Stack
 * 实现释放数据
 */
template <class Type>
Stack<Type>::~Stack() {

  // 释放指针变量存储的内存
  delete []data;

}

#endif
