// 普通查找 (适用于未排序的数组)
#include <iostream>

using namespace std;

// 声明模板
template <typename T>
// 查找数据的函数
int Find(const T list[] , int number , const T &key) {

  // 查找是否有此数据
  for (int i = 0; i < number; i++)
    // 判断当前数据是否是要查找的数据
    if (key == list[i])
      return i + 1;

  // 若未找到返回 -1
  return -1;

}

// 程序人口
int main(int argc, char const *argv[]) {

  // 定义数组
  int array[5] = { 666 , 233 , 888 , 999 , 0 };
  // 存储要查找的数据
  int findingData;
  //  存储结果的元素的下标
  int resultIndex;

  // 叫用户输入要查找的数据
  cout << "Enter the data you are looking for(666 , 233 , 888 , 999 , 0)" << ' ';
  // 存储要查找的数据
  cin >> findingData;

  // 调用函数查找并判断是否找到
  if ((resultIndex = Find(array , 5 , findingData)) != -1) {

    // 输出找到的数据的下标
    cout << "The index of the data you are looking for is:" << resultIndex << endl;

  } else {

    // 输出未找到
    cout << "No data found" << endl;

  }

  return 0;
}
