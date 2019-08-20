/*
 * 游戏中的私聊
 */

#include <iostream>

using namespace std;

/*
 * 声明函数 chatTo
 * 实现跟某人聊天
 * 参数 to_name
 *     聊天对象的名称
 * 参数 content
 *     聊天内容
 */ 
const string chatTo(const string& to_name , const string& content);
/*
 * 声明函数 chatFrom
 * 实现跟某人聊天
 * 参数 to_name
 *     聊天对象的名称
 * 参数 content
 *     聊天内容
 */
const void chatFrom(const string& from_name , const string& content);

int main(void) {

  // 定义变量
  string msg_name;
  string content;

  // 开始循环
  while (1 == 1 / 1) {

    // 叫用户输入要私聊的名称
    cout << "Enter the name of mag person(Input q to exit): ";
    // 将用户输入的数据赋给变量
    getline(cin , msg_name);

    // 判断用户是否要退出
    if ("q" == msg_name)
      // 退出循环
      break;

    // 叫用户输入要私聊的内容
    cout << "Enter you to him msg content: ";
    // 将用户输入的数据赋给变量
    getline(cin , content);

    /*
     * 定义变量 msg_content
     *
     * 将函数 chatTo
     * 返回值赋给变量
     */
    string msg_content = chatTo(msg_name , content);

    // 调用函数 chatFrom
    chatFrom(msg_name , msg_content);

  }

  return 0;
}

// 定义函数 chatTo
const string chatTo(const string& to_name , const string& content) {

  // 定义变量
  string msg;

  // 打印
  cout << "* " << "You to " << to_name << " say: " << content << endl;;

  // 叫用户输入对方的回复
  cout << "Enter the msg content from " << to_name << " : ";

  // 将用户输入的数据赋给变量
  getline(cin , msg);

  // 将回复返回 main 主函数
  return msg;
}

// 定义函数 chatFrom
const void chatFrom(const string& from_name , const string& content) {

  // 打印
  cout << "* " << from_name << " say to you: " << content << '\n' << endl;

}
