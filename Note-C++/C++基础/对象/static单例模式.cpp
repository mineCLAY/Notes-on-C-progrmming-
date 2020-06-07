/*
 * 单例模式: 设计模式的一种
 * 保证某个类永远只创建一个对象
 *
 * 1. 构造函数\析构函数私有化
 * 2. 定义一个私有的 static 成员变量
 *    指向唯一的那个单例对象
 * 3. 提供一个公共的访问单例对象的接口
 */

#include <iostream>
#include <cstring>

using namespace std;

class Test {

private:
  Test() {}
  // 防止类外面使用 delete 单例对象
  ~Test() {}
  static Test * t;

public:
  // 创建单例对象
  static Test * NewTest() {

    /*
     * 如果 t 不是空指针 (存有内存地址)
     * 这里要考虑多线程问题
     */
    if (t == NULL) {

      // 创建堆区的对象
      t = new Test();

    }

    // 返回单例对象的堆区内存
    return t;

  }

  // 删除单例对象
  static void DeleteTest() {

      /*
       * 如果 t 不是空指针 (存有内存地址)
       * 这里要考虑多线程问题
       */
      if (t != NULL) {

      // 回收单例对象的堆区内存
      delete t;
      /*
       * 使 t 指针变为空指针
       * 防止此指针变成野指针
       */
      t = NULL;

    }

  }

};

Test *Test::t = NULL;

int main(int argc, char const *argv[]) {

  // 创建单例对象
  Test *t = Test::NewTest();

  // 释放 (删除) 单例对象的堆内存
  t -> /* Test:: */ DeleteTest();

  return 0;

}
