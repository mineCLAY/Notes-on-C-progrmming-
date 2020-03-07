// 折半查找 (二分法查找)
#include <iostream>

using namespace std;

// 声明模板
template <typename T>
// 查找数据的函数
int BinarySearch(const T list[] , int number , const T &key) {

  // 定义数据的指针
  T L = 0;
  T H = number - 1;
  T M;

  // 开始查找
  while (L <= H) {

    // 让 M 指向中间元素
    M = (L + H) / 2;

    // 判断最小下标的数据是否是要查找的数据
    if (list[L] == key)
      // 返回查找到的数据的下标
      return L + 1;

    // 判断最大下标的数据是否是要查找的数据
    if (list[H] == key)
      // 返回查找到的数据的下标
      return H + 1;

    // 判断当前中间元素是否比要查找的数据大
    if (list[M] > key) {

      // 将 H 指向 M 元素的前一个元素
      H = M - 1;

    } else if (list[M] == key) {

      // 返回查找到的数据的下标
      return M + 1;

    } else {

      // 将 L 指向 M 元素的后一个元素
      L = M + 1;

    }

  }

  // 如果没有找到就返回 -1
  return -1;
}

// 程序人口
int main(int argc, char const *argv[]) {

  /*
   * 定义排序好的数组
   * (因为二分法查找一般需要一个排序好的数组)
   */
  int array[5] = { 0 , 233 , 666 , 888 , 999 };
  // 存储要查找的数据
  int findingData;
  //  存储结果的元素的下标
  int resultIndex;

  // 叫用户输入要查找的数据
  cout << "Enter the data you are looking for(0 , 233 , 666 , 888 , 999)" << ' ';
  // 存储要查找的数据
  cin >> findingData;

  // 调用函数查找并判断是否找到
  if ((resultIndex = BinarySearch(array , 5 , findingData)) != -1) {

    // 输出找到的数据的下标
    cout << "The index of the data you are looking for is:" << resultIndex << endl;

  } else {

    // 输出未找到
    cout << "No data found" << endl;

  }

  return 0;
}
