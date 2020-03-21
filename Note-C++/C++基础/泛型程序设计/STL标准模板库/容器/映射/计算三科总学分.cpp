/*
 * 映射 (map) 实例
 *
 * 有五门课程
 * 没门都有相应学分
 * 从中选择三门
 * 输出学学分总和
 */

#include <iostream>
// 映射
#include <map>
// 字符串操作
#include <string>
// 要使用 pair 类型
#include <utility>

using namespace std;

// 程序入口
int main(int argc, char const *argv[]) {

  map <string  , int> courses;

  // 将课程信息插入映射中
  courses.insert(make_pair("English" , 99));
  courses.insert(make_pair("C++" , 66));
  courses.insert(make_pair("Math" , 233));
  courses.insert(make_pair("C" , 88));
  courses.insert(make_pair("Python" , 66));

  // 剩下的可选次数
  int number = 3;
  // 学分总和
  int sum = 0;

  // 计算总分
  while (number > 0) {

    string name;
    // 输入课程名称
    cin >> name;

    // 查找课程
    map <string , int>::iterator iter = courses.find(name);
    // 判断是否找到
    if (courses.end() == iter) {

      // 输出未找到
      cout << name << " is not available" << endl;

    } else {

        // 累加学分
        sum +=  iter -> second;
        // J将刚选过的课程从映射中删除
        courses.erase(iter);
        // 可选次数减一
        number--;

    }

  }

  // 输出总学分
  cout << "Total credit: " << sum << endl;

  cin.get();
  cin.get();

  return 0;
}
