/*
 * 拷贝构造函数 (Copy Constructor)
 *
 * 拷贝构造函数时构造函数的一种
 * 当利用已存在的对象创建一个新对象时 (类似于拷贝)
 * 就会调用新对象的拷贝构造函数进行初始化
 * 拷贝构造函数的格式是固定的
 * 接收一个 const 引用作为参数
 */

#include <iostream>
#include <cstring>

using namespace std;

class Car {

public:

  int m_price;
  int m_length;

  // 构造函数
  Car(int price , int length) : m_price(price) , m_length(length) {

    cout << "Car(int price , int length)" << endl;

  }

  // 拷贝构造函数
  Car(const Car &car) : m_price(car.m_price) , m_length(car.m_length) {

    cout << "Car(const Car &car)" << endl;

  }

  // 析构函数
  ~Car() {

    cout << "~Car()" << endl;

  }

};

int main(int argc, char const *argv[]) {

  // 调用构造函数
  Car c1(888 , 666);

  // 调用拷贝构造函数
  Car c2(c1);

  // 测试是否拷贝成功
  cout << c2.m_price << ' ' << c2.m_length << '\n';

  return 0;

}
