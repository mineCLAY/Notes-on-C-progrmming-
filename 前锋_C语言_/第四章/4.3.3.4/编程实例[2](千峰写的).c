#include <stdio.h>

int main(void){
  int heritage;
  printf("输入 刘韵姿 有多少财产(单位万元):\n");
  scanf("%d" , &heritage);
  int tenth = heritage / 10;
  int remainder = heritage / 10;
  if(remainder == 0){
    remainder = heritage / 100;
  }
  heritage = heritage - tenth - remainder;
  int property = heritage / 3;
  printf("十一 , %d 万元 , 献给上帝.\n" , tenth);
  printf("余数 , %d 万元 , 分给穷人.\n" , remainder);
  printf("大儿子 继承 %d 万元.\n" , property * 2);
  printf("次女 %d 万元.\n" , property / 2);
  printf("小儿子 继承 %d 万元.\n" , property / 2);
  return 0;
}
