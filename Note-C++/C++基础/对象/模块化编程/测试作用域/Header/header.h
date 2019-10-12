/*
 * header.h
 *
 * 实现声明操作
 */

// 如果没有定义 HEADER_H
#ifndef HEADER_H

// 定义常量标识符 HEADER_H
#define HEADER_H

/*
 * 定义存储阶乘次数的变量
 * 如果定义变量还
 * 不想要出错 ("重定义")
 * 要加修饰符 static
 */
static const unsigned short headerNum = 5;

// 声明函数 ReturnFactorial
unsigned long ReturnFactorial(unsigned short num);

/*
 * 结束 #ifnedf HEADER_H
 * 和 #endif
 * 之间的代码
 */
#endif
