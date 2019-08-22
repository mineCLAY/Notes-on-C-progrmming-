/*
 * this 指针
 *
 * 每个成员函数 (包括构造和析构)
 * 都有一个 this 指针
 * this 指针指向调用对象
 * 即通过 this 关键字访问
 * 当前对象的成员
 * 访问成员变量:
 *    this -> 成员名;
 *    (*this).成员名;
 * 访问成员函数:
 *    this -> 函数名;
 *    (*this).函数名;
 *
 * 1. this 指针的类型为
 *    类类型 *const
 *    (类名 *const)
 *    为右值
 * 2. this 指针本身
 *    不占用大小 (内存) 
 *    它并不是对象的
 *    一部分因此不会
 *    影响 sizeof 的结果
 * 3. this 的作用域在
 *    类成员函数的内部
 * 4. this 指针是类成员
 *    函数的第一个默认
 *    隐含参数编译器
 *    自动维护传递类
 *    编写者不能显式传递
 * 5. 只有在类的非静态 (普通)
 *    成员函数中才开使用 this
 *    指针其它如何函数都不可以
 */

#include <iostream>

using namespace std;

// 定义类 Student
class Student {

// 私有
private:
  // 定义学生成绩个数
  int scoreCount;
  // 定义学生的分数数组
  float* score;
  // 定义成员变量
  string thisName;
  string thisDesc;

// 公有
public:

  // 定义构造函数并初始化参数列表
  Student(string name , string desc) : thisName(name) , thisDesc(desc) {

    // 打印
    cout << "调用带参构造函数" << endl;

    // 调用函数 InitScore
    InitScore();

  }

  /*
   * 定义函数 InitScore
   * 初始化学生成绩数组
   * 默认分配一个元素空间
   */
  void InitScore() {

    /*
     * 测试 this 指针
     * 指向的变量赋值和
     * 数组的初始化
     */
    (*this).score = new float[1];
    (*this).scoreCount = 1;
    // this -> score = new float[1];
    // this -> scoreCount = 1;

  }

  /*
   * 定义函数 AddScore
   * 向数组中添加一个分数
   */
  void AddScore(float score) {

    // 给数组赋值
    this -> score[scoreCount - 1] = score;

    /*
     * 以后再调用此函数
     * 数组的内存
     * (空间) 就不够了
     * 解决方法:
     * 1. 创建一个新数组
     *    分配
     *    scoreCount + 1 个空间
     * 2. 复制原数组中的
     *    内容到欣数组中
     * 3. scoreCount++
     * 4. score 指向新数组
     */

    /*
     * 创建新的内存空间 (数组)
     * 让指针指向它
     */
    float* newScore = new float[scoreCount + 1];
    /*
     * 定义指针
     * 让它指向原来
     * 指针的地址
     */
    float* oldScore = this -> score;
    // 调用函数复制数组元素
    memcpy(newScore , this -> score , sizeof(float) * scoreCount);
    // 让 scoreCount 自加
    scoreCount++;
    /*
     * 将创建的数组指针
     * 存储的地址赋给
     * 原来数组的地址
     */
    score = *newScore;

    // 释放内存 (资源)
    delete oldScore;

  }

  /*
   * 定义函数 ShowInfo
   * 实现打印数组
   */
  void ShowInfo() {

    // 打印
    cout << thisDesc << ' '
         << thisName << endl;

    // 循环打印
    for (int i = 0; i < scoreCount - 1; i++) {

      // 打印
      cout << score[i] << ' ';

    }

    // 打印换行
    cout << endl;

  }

  /*
   * C 语言写法
   * 模拟 this 指针
   * this 在 C++ 是函数的
   * 隐含第一个参数

  void TestThis(const Student* this) {

    *
    * 写法:
    * this -> 访问的成员
    *

    this -> AddScore();

  }

   */

  // 定义析构函数
  ~Student() {

    // 打印
    cout << thisName << " 被释放" << endl;

    // 释放内存 (资源)
    delete score;

  }

};

int main(void) {

  // 定义新的对象
  Student* ptrStudent = new Student("胡**" , "可爱女孩");

  /*
   * 多次调用函数 AddScore
   * 实现向数组添加分数
   */
  ptrStudent -> AddScore(18.6f);
  ptrStudent -> AddScore(28.6f);
  ptrStudent -> AddScore(38.6f);
  ptrStudent -> AddScore(48.6f);
  ptrStudent -> AddScore(58.6f);
  ptrStudent -> AddScore(68.6f);
  ptrStudent -> AddScore(78.6f);
  ptrStudent -> AddScore(88.6f);

  /*
   * 调用对象的
   * 成员函数 ShowInfo
   * 实现打印数组
   */
  (*ptrStudent).ShowInfo();

  return 0;
}
