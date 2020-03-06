// 冒泡排序
#include <iostream>

using namespace std;

// 声明模板
template <typename T>
// 交换函数
void Swap(T &x , T &y) {

  // 开始交换
  T temp = x;
  x = y;
  y = temp;

}

// 声明模板
template <typename T>
// 冒泡排序实现函数
void BubbleSort(T array[] , int number) {

  /*
   * 要进行循环的次数
   * 判断是否排序好的标志变量
   */
  int frequency = number - 1;

  // 判断是否排序好元素了
  while (frequency > 0) {

    // 存储最后一次交换的元素的下标
    int lastExchangeIndex = 0;

    for (int j = 0; j < frequency; j++) {

      // 判断当前元素是否比后一个元素大
      if (array[j] > array[j + 1]) {

        // 交换元素位置
        Swap(array[j] , array[j + 1]);
        // 更换最后交换的元素的下表指针
        lastExchangeIndex = j;

      }

    }

    // 让下次循环从上一次最后一个排序的元素开始
    frequency = lastExchangeIndex;

  }

}

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义数组
  int array[5] = { 999 , 0 , 666 , 888 , 233 };

  // 输出排序前
  cout << "Before sorting:" << '\n';
  for (int i = 0; i < 5; i++) {

    // 输出数组
    cout << array[i] << ' ';

  }

  /*
   * 输出换行
   * 并清空输出流缓存
   */
  cout << endl;

  // 调用函数进行排序
  BubbleSort(array , 5);

  // 输出排序后
  cout << "After sorting:" << '\n';
  for (int i = 0; i < 5; i++) {

    // 输出数组
    cout << array[i] << ' ';

  }

  /*
   * 输出换行
   * 并清空输出流缓存
   */
  cout << endl;

  return 0;
}
