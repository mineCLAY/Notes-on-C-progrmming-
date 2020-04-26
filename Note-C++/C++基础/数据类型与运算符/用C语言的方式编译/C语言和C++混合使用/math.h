/*
 * #ifdef,#define,#endif
 * 可以防止头文件的内容被重复包含
 *
 * #pragma once
 * 也可以防止整个文件的内容被重复包含
 *
 * 区别
 * #ifndef,#define,#endif 受 C\C++ 标准的支持
 * 不受编译器的任何限制
 * 有些编译器不支持 #pragma once
 * (较老编译器不支持如 GCC 3.4 版本之前)
 * 兼容性不好
 * #ifndef,#define,#endif 可以针对一个文件中的部分代码
 * 而 #pragma once 只能针对整个文件
 * 建议使用 #ifndef,#define,#endif
 */

// #pragma once 针对整个文件

// 针对部分代码
#ifndef __MATH_H
#define __MATH_H

/*
 * 如果定义了 __cplusplus 宏
 * (C++ 源文件自动定义)
 * 就执行 #ifdef 和 #endif
 * 之间的代码
 */
#ifdef __cplusplus
// 以 C 语言的方式编译
extern "C" {
// __cplusplus
#endif

  // 声明加法
  int sum(int temp , int t);
  // 减法
  int delta(int temp , int t);
  // 除法
  int divide(int temp , int t);

/*
 * 如果定义了 __cplusplus 宏
 * (C++ 源文件自动定义)
 * 就执行 #ifdef 和 #endif
 * 之间的代码
 */
#ifdef __cplusplus
}
// __cplusplus
#endif

// !MATH_H
#endif
