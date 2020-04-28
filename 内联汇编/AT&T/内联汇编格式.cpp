/*
 * 内联汇编
 *
 * 格式:
 * __asm {
 *
 * }
 */

#include <iostream>

using namespace std;

// 宏定义内联汇编格式的标识符
#define ASMSTART __asm__ __volatile__ (
#define ASMEND );

int main() {

  int a = 666; int temp;

  // 内联汇编
  ASMSTART

    /*
     * 将 a 的值赋值给 eax
     * 在编译的时候 a 会变成地址
     */
    "movl %0 , %%eax\n\t"
    "movl %%temp , %0\n\t"
    /*
     * 将 10 赋值给 ax
     * 在编译的时候 10 会变成地址
     */
    "movl $10 , %%ax\n\t" // mov 格式: mov src , dest
    /*
     * 将 11223344H (十六进制) 赋值给 eax
     * ax 的值也会被改变为 3344 (十六进制)
     * 因为 ax 是 eax 的一半字节
     * 因此在寄存器里只要有
     * 上下关系 (为上级的一半) 的寄存器
     * 就会相互影响
     * 比如: RAX>EAX>AX>(AH=AL)
     */
    "movl 0x11223344 , %%eax"
     : : "a"(a)

  ASMEND

  cin.get();

  return 0;
}
