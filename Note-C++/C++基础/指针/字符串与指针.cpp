/*
 * 字符串倒序输出
 *
 * 输入一个长度最大 100
 * 的字符串
 * 以字符数组的方式存储
 * 再将字符串倒序存储
 * 输出倒序存储后的字符串
 * (以字符指针为函数参数)
 */

#include <iostream>
// 导入函数库 stdio
#include <cstdio>
// 导入函数库 string
#include <cstring>

// 声明函数 Swapp
void Swapp(char & , char &);
// 声明函数 Work
void Work(char *);

using namespace std;

int main(void) {

  // 定义数组
  char string[110];
  // 定义指针让它指向数组
  char * str = string;

  // 叫用户输入字符串
  puts("Enter a string:");
  // 将用户输入的字符串赋给数组
  fgets(string , 110 , stdin);
  // gets(str);

  // 调用函数排序
  Work(str);

  // 输出排序后的字符串
  cout << str << endl;

  return 0;
}

// 定义 (实现) 函数 Work
void Work(char * string) {

  // 计算字符串长度
  int len = strlen(string);

  // 开始循环
  for (int i = 0; i < len / 2; i++) {

    // 调用函数排序
    Swapp(string[i] , string[len - i - 1]);

  }

  return;
}

/*
 * 定义 (实现) 函数 Swapp
 * 视线交换两个字符的位置
 */
void Swapp(char &character , char &ch) {

  // 定义临时变量
  char temp;

  // 开始交换
  temp = character;
  character = ch;
  ch = temp;

  return;
}

/*
 * 指针当作函数参数

void Swapp(char * character , char * ch) {

  // 定义临时变量
  char temp;

  // 开始交换
  temp = *character;
  *character = *ch;
  *ch = temp;

  return;
}

 */
