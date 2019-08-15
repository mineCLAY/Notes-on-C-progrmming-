/* 
 * 使用二维数组
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义名称
  string name[] = {
    "刘备" , "关羽" , "张飞"
  };
  // 定义科目
  string course_name[] = {
    "语文" , "数学" , "英语"
  };

  /*
   * 定义整型常量存储
   * 数组 name
   * 的长度 (字节)
   */
  const int ROW = sizeof(name) / sizeof(name[0]);
  /*
   * 定义整型常量存储
   * 数组 course_name
   * 的长度 (字节)
   */
  const int COL = sizeof(course_name) / sizeof(course_name[0]);

  // 定义二维数组 scores
  double score[ROW][COL];

  // 外层循环控制名称
  for (int i = 0; i < ROW; i++) {

    // 内层循环控制科目
    for (int j = 0; j < COL; j++) {

      // 叫用户输入成绩
      cout << name[i] << " of " << course_name[j] << " score: ";
      // 将用户输入的成绩赋给变量
      cin >> score[i][j];

    }

  }

  // 打印结果
  cout << '\n' << endl;
  // 打印制表符
  cout << '\t';
  // 打印科目
  for (int i = 0; i < COL; i++) {

    // 打印
    cout << course_name[i] << '\t';

  }

  // 打印换行
  cout << endl;
  // 打印名称
  for (int i = 0; i < ROW; i++) {

    // 打印名称
    cout << name[i] << '\t';

    // 内层循环打印成绩
    for (int j = 0; j < COL; j++) {

      // 打印
      cout << score[i][j] << '\t';

    }

    // 打印换行
    cout << endl;

  }

  // 打印换行
  cout << endl;

  return 0;
}
