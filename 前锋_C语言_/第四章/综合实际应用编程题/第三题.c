/*
 * 03. 防止缓冲区溢出
 * 如果在未知的有符号数上执行位操作 , 很可能会导致缓冲区溢出
 * 从而在某些情况下导致攻击者执行任意代码
 * 同时 , 还可能会出现出乎意料的行为或编译器定义的行为
 */

#include <stdio.h>

int main(void){
  int x = 0;
  unsigned int y = 0x800000000;
  char buf[sizeof("128")];
  x = sprintf(buf , "%lu" , y >> 24);
  if (x == -1 || x >= sizeof(buf)){
    //错误处理
  }
  printf(buf);
}

//注意: 在做任何事情的时候 , 它有可能出现错误 , 在不同平台上就会出现错误 , 那就用这个处理错误
