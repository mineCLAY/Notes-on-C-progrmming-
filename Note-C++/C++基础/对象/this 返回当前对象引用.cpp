/*
 * this 返回当前对象引用
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
   * 定义函数 GetName
   * 返回变量 thisName
   */
  const string GetName(void) {

    // 返回 thisName
    return thisName;

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
   * 定义函数 GetTotal
   * 计算总分
   */
  float GetTotal() {

    // 定义存储结果变量
    float result = 0.0f;

    // 循环计算
    for (int i = 0; i < scoreCount - 1; i++) {

      // 累加
      result += *(score + i);

    }

    // 返回 result
    return result;

  }

  /*
   * 定义 Student
   * 类引用的函数
   * 在函数结尾声明 (定义)
   * 为 const
   * 函数内部不允许
   * 修改对象本身
   * 调用本对象非 const 方法
   * 就会报错
   * 因为结尾声明
   * (定义) 为 const
   * 所以前缀也应该为 const
   */
  /* const */ Student& GetSuperScholar(Student& otherStu) /* const */ {

    /*
     * 判断哪个对象
     * 的分数总和大
     */
    if ((this -> GetTotal()) > (otherStu.GetTotal())) {

      /*
       * 因为函数
       * 末尾加上了 const
       * 所以不让修改对象
       */
      // this -> thisName = "test";

      // 返回当前对象的引用
      return *this;

    } else {

      // 返回另一个对象的引用
      return otherStu;

    }

  }

  // 定义析构函数
  ~Student() {

    // 打印
    cout << thisName << " 被释放" << endl;

    // 释放内存 (资源)
    delete score;

  }

};

int main(void) {

  /*
   * new 一块内存 (空间)
   * 此内存在堆中
   * 定义指针
   * 让指针指向它
   */
  Student* ptrStudent = new Student("胡**" , "可爱女孩");

  /*
   * 多次调用函数 AddScore
   * 实现向数组添加分数
   */
  ptrStudent -> AddScore(100.6f);
  ptrStudent -> AddScore(100.6f);
  ptrStudent -> AddScore(55.6f);
  ptrStudent -> AddScore(66.6f);
  ptrStudent -> AddScore(77.6f);
  ptrStudent -> AddScore(88.6f);
  ptrStudent -> AddScore(99.6f);
  ptrStudent -> AddScore(100.0f);

  /*
   * new 一块内存 (空间)
   * 此内存在堆中
   * 定义指针
   * 让指针指向它
   */
  Student* student = new Student("刘**" , "不爱美人");

  /*
   * 多次调用函数 AddScore
   * 实现向数组添加分数
   */
  (*student).AddScore(00.6f);
  (*student).AddScore(00.6f);
  (*student).AddScore(00.6f);
  (*student).AddScore(00.6f);
  (*student).AddScore(00.6f);
  (*student).AddScore(00.6f);
  (*student).AddScore(00.6f);
  (*student).AddScore(00.6f);

  // 定义对象
  Student& scholar1 = (*student).GetSuperScholar(*ptrStudent);
  Student& scholar2 = (*ptrStudent).GetSuperScholar(*student);

  // 打印结果
  cout << "学霸: " << scholar1.GetName() << endl;

  // 释放内存 (资源)
  delete ptrStudent;
  delete student;

  /*
   * scholar1 在栈内存中定义
   * 的所以结束后会
   * 自动释放scholar1
   */

  /*
   * scholar2 在栈内存中定义
   * 的所以结束后会
   * 自动释放scholar2
   */

  return 0;
}
