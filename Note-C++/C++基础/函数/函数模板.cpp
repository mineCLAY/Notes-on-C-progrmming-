/*
 * 函数模板
 * (Function Template)
 *
 * 函数定义时不制定具体的数据类型
 * (使用虚拟类型代替)
 * 函数被调用时编译器根据
 * 实参反推数据类型 - 数据参数化
 *
 * 早期写法
 * template<class Type>
 * 升级写法
 * template<typename Type>
 */

#include <iostream>

using namespace std;

/*
 * 模板头与函数 声明 / 定义
 * 永远是不可分割的整体
 */
template<typename Type>
void sort(Type type_array[] , int len);
template<typename Type>
void print(Type type_array[] , int len);

int main(void) {

  // 定义数组
  int int_num[] = { 56 , 54 , 12 , 89 , 43 };
  float float_num[] = { 78.0f , 5.7f , 42.8f , 99.1f };
  double double_num[] = { 78.0 , 5.7 , 42.8 , 99.1 , 33.3 };
  string string_num[] = {
    "刘备" , "关羽" , "张飞"
  };

  // 调用函数排序
  sort(int_num , sizeof(int_num) / sizeof(int));
  sort(float_num , sizeof(float_num) / sizeof(float));
  sort(double_num , sizeof(double_num) / sizeof(double));

  // 调用函数打印
  print(string_num , 3);

  return 0;
}

// 定义函数
template<class Type>
void sort(Type type_array[] , int len) {

  // 冒泡排序
  for (int i = 0; i < len - 1; i++) {

    // 嵌套循环
    for (int j = 0; j < len - i - 1; j++) {

      // 定义临时变量
      int temp;

      /*
       * 判断前一元素
       * 是否比后一元素大
       */
      if (type_array[j] > type_array[j + 1]) {

        // 交换
        temp = type_array[j + 1];
        type_array[j + 1] = type_array[j];
        type_array[j] = temp;

      }

    }

  }

  // 调用函数输出
  print(type_array , len);

}

template<typename Type>
void print(Type type_array[] , int len) {

  // 循环打印
  for (int i = 0; i < len; i++) {

    // 打印
    cout << type_array[i] << ' ';

  }

  // 打印换行
  cout << endl;

}
