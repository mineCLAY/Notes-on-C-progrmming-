/*
 * 多继承 (multiple inheritance)
 *
 * 在一个需要多种特性的
 * 类时适合使用多继承
 *
 * 所谓面向对象
 * 就是把代码尽可能
 * 抽象化
 */

#include <iostream>

using namespace std;

// 定义类 Person
class Person {

// 私有 (子类可以用)
protected:
  // 定义变量
  string name;

// 公有
public:
  /*
   * 定义构造函数
   * 并初始化参数列表
   */
  Person(string thisName) : name(thisName) {

    // ctor

  }

  // 定义函数 Introduce
  void Introduce() {

    // 输出
    cout << "You are " << (*this).name << endl;

  }

};

/*
 * 定义类 Teacher
 * 继承类: Person
 */
class Teacher : public Person {

// 私有 (子类可以用)
protected:
  // 定义变量
  string classes;

// 公有
public:
  /*
   * 定义构造函数
   * 并调用基类构造函数
   * 并初始化列表
   */
  Teacher(string thisName , string thisClasses) : Person(thisName) , classes(thisClasses) {

    // ctor

  }

  // 定义函数 Teach
  void Teach() {

    // 输出
    cout << (*this).name << " teach " << (*this).classes << '\n' << endl;

  }

  // 覆盖基类函数 Introduce
  void Introduce() {

    // 输出
    cout << "You are " << name << endl;

  }

  // 定义析构函数
  ~Teacher() {

    // dtor

  }

};

/*
 * 定义类 Student
 * 继承类: Person
 */
class Student : public Person {

// 私有 (子类可以用)
protected:
  // 定义变量
  string classes;

// 公有
public:
  /*
   * 定义构造函数
   * 调用基类构造函数
   * 并初始化列表
   */
  Student(string thisName , string thisClasses) : Person(thisName) , classes(thisClasses) {

    // ctor

  }

  // 定义函数 AttendClass
  void AttendClass() {

    // 输出
    cout << (*this).name << " join " << classes << '\n' << endl;

  }
  // 定义析构函数
  ~Student() {

    // dtor

  }
};

/*
 * 定义类 TeachingStudent
 * 继承类: Teacher , Student
 */
class TeachingStudent : public Teacher , public Student {

// 公有
public:
  /*
   * 定义构造函数
   * 调用基类构造函数
   */
  TeachingStudent(string thisName , string classTeaching , string classAttending) : Teacher(thisName , classAttending) , Student(thisName , classAttending) {

    // ctor

  }
  
  // 覆盖基类函数 Introduce
  void Introduce() {

    // 输出
    cout << "You are " << Teacher::name << '\n'
         << "You are teach " << Teacher::classes << endl;

  };

  // 定义函数 Attending
  void Attending() {

    // 输出
    cout << "He in " << Student::classes << endl;

  }

  // 定义析构函数
  ~TeachingStudent() {

    // dtor

  }

};

// 程序入口
int main(void) {

  /*
   * 定义对象
   * 此内存在栈区
   */
  Teacher teacher("Myself" , "C++");
  Student student("Youself" , "C++");
  TeachingStudent teachingStudent("test" , "C" , "C++");

  /*
   * 调用对象 teacher
   * 的成员函数
   */
  teacher.Introduce();
  teacher.Teach();

  /*
   * 调用对象 student
   * 的成员函数
   */
  student.Introduce();
  student.AttendClass();

  /*
   * 调用对象 teachingStudent
   * 的成员函数
   */
  teachingStudent.Introduce();
  teachingStudent.Attending();

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  cin.get();

  return 0;
}
