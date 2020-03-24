/*
 * 成员适配器实现
 * 将成员函数转换成函数对象
 */

#include <iostream>
// STL 算法
#include <algorithm>
// 向量
#include <vector>
// STL 函数对象
#include <functional>
// size_t
#include <cstddef>

using namespace std;

// 定义结构体 Car
struct Car {

  int id;
  // 构造函数
  Car(int id) { this -> id = id; }
  // 输出对象的信息
  void display() const { cout << "Car #" << id << endl; }

};

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义存储一组对象的向量
  vector <Car *> pointCars;
  vector <Car> cars;

  // 输入车的信息
  for (size_t i = 0; i < 5; i++)
    // 压入数据
    pointCars.push_back(new Car(i));
  for (size_t i = 0; i < 5; i++)
    // 压入数据
    cars.push_back(Car(i));

  // 输出 pointCars 的数据
  cout << "Elements in pointCars:" << endl;
  for_each(pointCars.begin() , pointCars.end() , mem_fun(&Car::display));
  cout << endl;

  // 输出 cars 的数据
  cout << "Elements in cars:" << endl;
  for_each(cars.begin() , cars.end() , mem_fun_ref(&Car::display));
  cout << endl;

  // 删除堆中的 pointCars
  for (size_t i = 0; i < pointCars.size(); i++)
    delete pointCars[i];

  cin.get();

  return 0;
}
