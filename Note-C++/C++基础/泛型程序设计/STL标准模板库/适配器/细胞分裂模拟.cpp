/*
 * 细胞分裂模拟
 *
 * 用优先队列模拟
 * 一种细胞在诞生 (即上次分裂) 后
 * 会在 500 到 2000 秒内
 * 分裂为两个细胞
 * 每个细胞又按照同样的规律继续分裂
 */

#include <iostream>
// 优先队列
#include <queue>
// 使用 srand
#include <cstdlib>
// 使用 time
#include <ctime>

using namespace std;

// 细胞分裂最短时间
const int SPLIT_TIME_MIN = 500;
// 细胞分裂最长时间
const int SPLIT_TIME_MAX = 2000;

// 什么细胞类
class Cell;
// 定义优先队列
priority_queue <Cell> cellQueue;

// 定义细胞类
class Cell {

// 私有
private:
  // 细胞总数
  static int count;

  // 当前细胞编号
  int id;

  // 细胞分裂时间
  int time;

// 公有
public:
  // birth 为细胞诞生时间
  Cell(int birth) {

    // 初始化细胞编号
    id = count++;
    // 初始化细胞分裂时间
    time = birth + (rand() % (SPLIT_TIME_MAX - SPLIT_TIME_MIN)) + SPLIT_TIME_MIN;

  }

  // 得到细胞编号
  int GetId() const { return id; }

  // 得到细胞分裂时间
  int GetSplitTime() const  { return time; }

  // 重载 "<" 运算符
  bool operator < (const Cell& temp) const { return time > temp.time; }

  // 细胞分裂
  void Split() const {

    // 建立两个子细胞
    Cell childOne(time) , childTwo(time);
    // 输出细胞信息
    cout << time << ": Cell #" << id << " splits to #"
         << childOne.GetId() << " and #" << childTwo.GetId() << endl;

    // 降低一个子细胞压入优先级队列
    cellQueue.push(childOne);
    // 降低二个子细胞压入优先级队列
    cellQueue.push(childTwo);

  }

};

// 初始化 Cell 类中的 count
int Cell::count = 0;

// 程序入口
int main(int argc, char const *argv[]) {

  srand(static_cast <unsigned> (time(0)));

  // 模拟时间长度
  int t;
  cout << "Simulation time: ";
  cin >> t;

  // 降低一个细胞压入优先级队列
  cellQueue.push(Cell(0));

  /*
   * 如果现在的细胞分裂时间还未达到
   * 用户输入的模拟时间就执行循环
   */
  while (cellQueue.top().GetSplitTime() <= t) {

    // 模拟下一个细胞的分裂
    cellQueue.top().Split();
    // 将刚刚分裂的细胞弹出
    cellQueue.pop();

  }

  cin.get();
  cin.get();

  return 0;
}
