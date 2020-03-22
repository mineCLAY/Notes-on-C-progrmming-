/*
 * 上课时间查询
 * 多重映射实现 (multimap)
 */

#include <iostream>
// 映射
#include <map>
// 要使用 pair
#include <utility>
// 字符串操作
#include <string>

using namespace std;

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义多重映射
  multimap <string , string> courses;

  // 重命名
  typedef multimap <string , string>::iterator CoursesIter;

  // 将课程上课时间插入 courses 映射中
  courses.insert(make_pair("Python" , "1-6"));
  courses.insert(make_pair("C" , "3-1"));
  courses.insert(make_pair("C" , "5-2"));
  courses.insert(make_pair("C++" , "1-2"));
  courses.insert(make_pair("C++" , "4-1"));
  courses.insert(make_pair("C++" , "5-5"));

  /*
   * 输入一个课程名
   * 直接找到该课程为止
   * 记下每周上课次数
   */
  string name;
  int count;

  do {

    // 存储数据
    cin >> name;
    // 寻找关键字出现次数
    count = courses.count(name);

    // 如果没找到
    if (count == 0)
      // 输出提示
      cout << "Cannot find this course" << endl;

  } while (count == 0); // 如果未找到课程就再次循环

  // 输出每周上课次数和上课时间
  cout << count << " lesson(s) per week: ";

  // 寻找要查找课程的范围
  pair <CoursesIter , CoursesIter> range = courses.equal_range(name);

  // 输出上课日期
  for (CoursesIter iter = range.first; iter != range.second; ++iter)
    // 输出上课日期
    cout << iter ->second << " ";

  // 释放输出流缓存
  cout << endl;

  cin.get();
  cin.get();

  return 0;
}
