// 队列类模板

// Queue.h
#ifndef QUEUE_H
#define QUEUE_H

// 导入函数库
#include <cassert>

// 定义模板
template <typename T , int SIZE = 50>
class Queue {

// 私有
private:
  // 队头指针
  int front;
  // 队尾指针
  int rear;
  // 元素个数
  int count;
  // 队列元素数组
  T list[SIZE];

// 公有
public:
  /*
   * 构造函数
   * 初始化队头指针
   * 队尾指针和元素个数
   */
  Queue();

  // 插入元素 (新元素入队)
  void Insert(const T &item);

  // 元素出队
  T Remove();

  // 清空队列
  void Clear();

  // 访问队首元素
  const T &GetFront() const;

  // 秋队列长度
  int Length() const;

  // 判断队列是否为空
  bool IsEmpty() const;

  // 判断队列是否为满
  bool IsFull() const;

};

// 定义 Queue 类的函数
template <typename T , int SIZE>
Queue <T , SIZE>::Queue() {

  // 给相应变量初始化
  front = 0;
  rear =  0;
  count = 0;

}

template <typename T , int SIZE>
void Queue <T , SIZE>::Insert(const T& item) {

  /*
   * 判断队列是否满
   * 如果满了
   * 就终止程序
   */
  assert(!IsFull());

  // 元素个数增 1
  count++;

  // 向队尾插入元素
  list[rear] = item;

  /*
   * 队尾指针怎增 1
   * 用取余运算实现循环队列
   */
  rear = (rear + 1) % SIZE;

}

template <typename T , int SIZE>
T Queue <T , SIZE>::Remove() {

  /*
   * 判断队列是否空
   * 如果空了
   * 就终止程序
   */
  assert(!IsEmpty());

  // 记录下原先的队首指针
  int temp = front;

  // 元素个数自减
  count--;

  /*
   * 队首指针增 1
   * 取余实现循环队列
   */
  front = (front + 1) % SIZE;

  // 返回原先首元素值
  return list[temp];

}

template <typename T , int SIZE>
const T &Queue <T , SIZE>::GetFront() const {

  // 返回首位元素
  return list[front];

}

template <typename T , int SIZE>
int Queue <T , SIZE>::Length() const {

  // 返回元素数量
  return count;

}

template <typename T , int SIZE>
bool Queue <T , SIZE>::IsEmpty() const {

  /*
   * 先判断队列是否空
   * 再返回 bool 值
   */
  return count == 0;

}

template <typename T , int SIZE>
bool Queue <T , SIZE>::IsFull() const {

  /*
   * 先判断队列是否空
   * 再返回 bool 值
   */
  return count == SIZE;

}

template <typename T , int SIZE>
void Queue <T , SIZE>::Clear() {

  // 清空数据
  count = 0;
  rear = 0;
  front = 0;
  delete [] list;

}
