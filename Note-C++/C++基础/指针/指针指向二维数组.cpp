/*
 * 指针指向二维数组
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义数组
  int array[5][3] = {
    { 0000 , 1 , 2 } ,
    { 3 , 4 , 5 } ,
    { 6 , 7 , 8 } ,
    { 9 , 10 , 11 } ,
    { 12 , 13 , 14 }
  };
  // 使用指针创建一维数组
  int * p = new int[10];
  // 使用指针创建二维数组
  int (*pointer)[3] = new int[5][3];
  // 声明指针指向二维数组
  int (*ptr)[3] = array;

  // 给一个数组元素赋值
  pointer[3][2] = 6666;

  // 循环打印
  for(int i = 0; i < 5; i++) {

    // 嵌套
    for (int j = 0; j < 3; j++) {

      // 打印
      cout << *(*(pointer + i) + j) << ' ';

    }

    // 打印换行
    cout << endl;

  }

  // 打印换行
  cout << endl;

  // 循环打印
  for (int i = 0; i < 5; i++) {

    // 嵌套
    for (int j = 0; j < 3; j++) {

      // 打印
      cout << *(*(ptr + i) + j) << ' ';

    }

    // 打印换行
    cout << endl;

  }

  // 循环打印数组的地址
  for (int i = 0; i < 5; i++) {

    // 打印数组第一维的地址
    cout << (ptr + i) << endl;

  }

  // 将指针存储的数据清除
  delete p;
  delete pointer;
  delete ptr;
  // 将 nullptr 赋给指针
  p = nullptr;
  pointer = nullptr;
  ptr = nullptr;

  return 0;
}
