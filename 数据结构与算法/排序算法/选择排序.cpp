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
void SelectionSort(T array[] , int number) {

    for (int i = 0; i < number - 1; i++) {

     // 指向要交换的数
     int leastIndex = i;

     for (int j = i + 1; j < number; j++) {

       // 判断元素是否比当前要交换的数大
       if (array[j] < array[leastIndex])
         // 将要交换的数的指针指向较大的数
         leastIndex = j;

     }

     // 交换元素位置
     Swap(array[i] , array[leastIndex]);

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
  SelectionSort(array , 5);

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
