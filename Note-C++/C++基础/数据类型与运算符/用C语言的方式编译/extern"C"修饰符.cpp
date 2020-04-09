/*
 * extern "C"
 *
 * 被 extern "C" 修饰的代码会按照
 * C 语言的方式去编译
 */

#include <iostream>

/*
 * 如果函数同时又声明和实现
 * 要让函数声明被 extern "C" 修饰
 * 函数实现跨越不修饰
 */
extern "C" void test();

/*
 * 出错
 * 因为此函数被 extern "C" 修饰后
 * 是按 C 语言的方式编译
 * 而 C 语言不支持函数重载

extern "C" void test(int temp) {

  std::cout << "test(int)" << std::endl;

}

 */

// 在此代码块中用 C 语言方式编译
extern "C" {

  void testBlock() {

    std::cout << "C" << std::endl;

  }

}

// 程序入口
int main(int argc, char const *argv[]) {

  std::cin.get();

  return 0;
}

// 函数实现 (省略 extern "C")
/* extern "C" */  void test() {

  std::cout << "test" << std::endl;

}
