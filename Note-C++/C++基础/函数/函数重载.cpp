/*
 * 函数重载 (overloading)
 *
 * 指可以有多个同名的函数
 * 函数名相同
 * 参数列表不同 (特征标不同)
 *
 * 1. 从编译器角度看
 *    参数是基本类型和引用类型
 *    的特征表是相同的
 *    因为:
 *    特征标在编译器编译时
 *    根据参数列表对
 *    函数进行
 *    重载决议 (重命名)
 *    比如 God(string food)
 *    会重载决议为:
 *    God_string
 *    因为无法用符号命名
 *    所以在重载决议时会将
 *    God(string&)
 *    中的 & 省略变为:
 *    God_string
 *    所以编译器为了避免混乱
 *    把类型引用和类型本身
 *    视为同一个特征标
 * 2. 调用匹配函数时
 *    不区分 const 和
 *    非 const 变量
 */

#include <iostream>

using namespace std;


// 声明函数成为重载
void print(int[] , int len);
void print(float[] , int len);
void print(double[] , int len);

// 声明函数成为重载
void sort(int[] , int len);
void sort(float[] , int len);
void sort(double[] ,int len);

int main(void) {

  // 定义数组
  int int_num[] = { 56 , 54 , 12 , 89 , 43 };
  float float_num[] = { 78.0f , 5.7f , 42.8f , 99.1f };
  double double_num[] = { 78.0 , 5.7 , 42.8 , 99.1 , 33.3 };

  /*
   * 定义变量存储
   * 三个数组的长度
   * (字节)
   */
  int int_len = sizeof(int_num) / sizeof(int_num[0]);
  int float_len = sizeof(float_num) / sizeof(float_num[0]);
  int double_len = sizeof(double_num) / sizeof(double_num[0]);

  // 调用函数给三个数组排序
  sort(int_num , int_len);
  sort(float_num , float_len);
  sort(double_num , double_len);

  return 0;
}

/*
 * 重载:
 * 函数名相同
 * 参数列表 (特征标) 不同
 * 实现排序和打印
 */

// 整型数据排序
void sort(int num[] , int len) {

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
      if (num[j] > num[j + 1]) {

        // 交换
        temp = num[j + 1];
        num[j + 1] = num[j];
        num[j] = temp;

      }

    }

  }

  // 调用函数打印排序后的数组
  print(num , len);

}
// 整型数据打印
void print(int num[] , int len) {

  // 循环打印
  for (int i = 0; i < len; i++) {

    // 打印
    cout << num[i] << ' ';

  }

  // 打印换行
  cout << endl;

}

// 单精度浮点型数据排序
void sort(float num[] , int len) {

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
      if (num[j] > num[j + 1]) {

        // 交换
        temp = num[j + 1];
        num[j + 1] = num[j];
        num[j] = temp;

      }

    }

  }

  // 调用函数打印排序后的数组
  print(num , len);

}
// 单精度浮点型数据打印
void print(float num[] , int len) {

  // 循环打印
  for (int i = 0; i < len; i++) {

    // 打印
    cout << num[i] << ' ';

  }

  // 打印换行
  cout << endl;

}

// 双精度浮点型数据排序
void sort(double num[] , int len) {

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
      if (num[j] > num[j + 1]) {

        // 交换
        temp = num[j + 1];
        num[j + 1] = num[j];
        num[j] = temp;

      }

    }

  }
  // 调用函数打印排序后的数组
  print(num , len);

}
// 双精度浮点型数据打印
void print(double num[] , int len) {

  // 循环打印
  for (int i = 0; i < len; i++) {

    // 打印
    cout << num[i] << ' ';

  }

  // 打印换行
  cout << endl;

}
